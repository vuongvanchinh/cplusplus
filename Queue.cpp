#include<iostream>
using namespace std;
#define MAXSIZE 5
int rear=-1;
int front=0;
int queue[MAXSIZE];
bool isEmpty()
{
	if(front>rear)return true;
	return false;
}
bool isFull()
{
	if(rear-front==MAXSIZE-1)return true;
	return false;
	
}
void enqueue(int data)//insert 
{
	if(!isFull())
	{
		rear++;
		queue[rear]=data;
	}
	else cout<<"Queue is full \n";
}
int dequeue()//remove
{
	int data;
	if(!isEmpty())
	{
		data=queue[front];
		front++;
		return data;
	}
	else cout<<"Queue is Empty \n";
	
}
int main()
{
   //your code here
   enqueue(1);
   enqueue(2);
   enqueue(3);
   enqueue(4);
   enqueue(5);  
   
   cout<<dequeue()<<"\n";
   cout<<dequeue()<<"\n";
   cout<<dequeue()<<"\n";
   cout<<dequeue()<<"\n";
   cout<<dequeue()<<"\n";
   cout<<dequeue()<<"\n";
   
   return 0;
}


