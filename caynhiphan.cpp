#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
typedef struct node NODE;//thay "struct node* bang "NODE"
typedef NODE* Tree;//thay NODE* bâng Tree
void Khoitaocay(Tree &t)
{
	t = NULL;//cay rong
}
void ADD(Tree &t, int x)
{
	if (t == NULL)
	{
		NODE *p = new NODE; //khoi tao node moi
		p->data = x;
		p->left = NULL;
		p->right = NULL;
		t = p; //gan t=p

	}
	else//cay da ton tao =
	{
		if (x > t->data)ADD(t->right, x);
		else
			if (x < t->data)ADD(t->left,x);
	}
}
void OUT(Tree t)
{
	if (t != NULL)
	{
		cout << t->data << "\n";
		OUT(t -> left);
		OUT(t->right);
	}
}
//ham nhap du lieu 
void Menu(Tree& t)
{
	while (1)
	{

		cout << "1.Nhap du lieu \n";
		cout << "0. THoat \n";
		cout << "2.xuat du lieu cay\n";
		cout<<"Nhap lua chon \n";
		int select;
		cin >> select;
		if (select == 1)
		{
			int x;
			cin >> x;
			ADD(t, x);
		}
		else
		{
			if (select == 2)OUT(t);
			else
			{
				if (select == 0)break;
			}
		}

	}
	

}
int main()
{
	Tree t;
	Khoitaocay(t);
	Menu(t);
	system("pause");
	cout << "/n exited";
	return 0;

}
