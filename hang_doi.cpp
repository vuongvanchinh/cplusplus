#include<iostream>

using namespace std;
#define MAXSIZE 8
int stack[MAXSIZE];
int top=-1;
bool isEmpty()
{
	if(top==-1) return true;
	return false;
}
bool isFull()
{
	if(top==MAXSIZE-1)return true;
	return false;
}
int peek()// lay ra phan tu dau 
{
	if(!isEmpty())
	{
		return stack[top];
	}
	else cout<<"Stack is Empty \n";
}
int pop()
{
	int data;
	if(!isEmpty())
	{
		data= stack[top];
		top--;
	}
	else cout<<"Stack is Empty \n";
}
void Push(int data)
{
	if(!isFull())
	{
		top++;
		stack[top]==data;	
	}
	else cout<<"Stack is Full \n";
}
int main()
{
   //your code here
   Push(1);
   Push(2);
   Push(3);
   Push(4);
   Push(5);
   Push(6);
   Push(7);
   Push(8);
   pop();
   pop();
   pop();
   pop();
   pop();
   pop();
   pop();
   pop();
   pop();
   
   return 0;
}


