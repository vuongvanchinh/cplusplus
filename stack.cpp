#include<iostream>;
using namespace std;
const int max_size = 100;
int current_size = -1;
int stack [max_size];

bool empty()
{
	return (-1 == current_size);
}
bool full()
{
	return (current_size == max_size);
}
void push(int data)
{
	if (!full())
	{
		current_size++;
		stack[current_size] = data;
	}
	else cout << "stack is full";
}
int top()
{
	if (!empty())
	{
		int data = stack[current_size];
		return data;
	}
	else cout << "stack is empty /n";
}
int pop()//l?y ph?n t? cu?i r?i xóa luôn 
{
	if (!empty())
	{
		int data = stack[current_size];
		current_size--;
		return data;
	}
	else cout << "stack is empty \n";
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(45);
	pop();
	cout<<top();
	cout<<current_size;
	pop();
	
}

