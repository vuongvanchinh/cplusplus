#include<iostream>

using namespace std;
struct Node
{
    int data;
    Node* leftChild;
    Node* rightChild;

    Node(int data_)
    {
        data=data_;
        leftChild=NULL;
        rightChild=NULL;
    }
};
Node* Add(Node* &root, int data)
{
    Node* newNode= new Node(data);
    if(root==NULL) root=newNode;
    else
    {
        if(root->leftChild==NULL) root->leftChild=newNode;
        else {
            if(root->rightChild==NULL)root->rightChild=newNode;
        }
    }
    return newNode;
}
void Display(Node* root)
{
   if(root==NULL) return ;
   cout<<root->data<<" ";
   Display(root->leftChild);
   Display(root->rightChild);
}
/*there are four cases
    case 1: there is only one node
    case 2: contain left parth and node root
    case 3: contain right path and root
    case 4 contain left + root+ right
*/

int findMaxpath(Node* root, int &result)
{
    if(root==NULL) return 0;
    int left=findMaxpath(root->leftChild, result);
    int right= findMaxpath(root->rightChild, result);

    // handle case only node or right/ left + root 1 2 3
    int max_single=max(max(left, right)+ root->data,root->data );
    // handle case 4 or (1/2/3)

    int max_top=max(max_single, left+right+ root->data);

    result=max(result, max_top);

    return max_single;
}
int findMax(Node * root)
{
    int result=INT_MIN;
    findMaxpath(root, result);

    return result;
}
int main()
{
    Node* root=NULL;
    root=Add(root, 10);
    Node* A=Add(root, 20);
    Node* B=Add(root, 30);
    Node* C=Add(A, -10);
    Node* D=Add(A,5);
    Node* E=Add(B, -5);
    Node* F=Add(B, 15);
    Display(root);
    cout<<"\n"<<findMax(root);
    return 0;
}
