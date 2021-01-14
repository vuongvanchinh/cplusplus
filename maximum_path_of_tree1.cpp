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
            if(root->rightChild==NULL) root->rightChild=newNode;
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

int handle(Node* root, int &result)
{
    if(root==NULL)return 0;

    int left=handle(root->leftChild, result);
    int right=handle(root->rightChild, result);

    int max_single=max(max(left, right)+root->data, root->data);

    int max_top=max(max_single, left+right+root->data);

    result=max(result, max_top);

    return max_single;
}
int findMaxPath(Node* root)
{
    int result=INT_MIN;
    handle(root, result);
    return result;
}
int main()
{

    Node* root=NULL;
    root=   Add(root, 10);
    Node* A=Add(root, 20);
    Node* B=Add(root, 30);
    Node* C=Add(A, -10);
    Node* D=Add(A,5);
    Node* E=Add(B, -5);
    Node* F=Add(B, 15);
   Display(root);
   cout<<findMaxPath(root);
    return 0;
}
