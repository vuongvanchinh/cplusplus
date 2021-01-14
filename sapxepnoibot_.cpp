#include<iostream>

using namespace std;
#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void output(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<" ";
	}
	cout << endl;
}
//sap xep noi bot phan tu nho nhat len dau
void sapxepnoibot(int a[], int n)
{
	for (int i = 0; i < n -1; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j-1])
			{
				swap(&a[j], &a[j-1]);
			}
			
		}
	
	}
}
int main()
{
   //your code here
   int n=5;
   int a[5]={9,8,6,5,7};//n=5
   sapxepnoibot(a,n);
output(a, n);
   return 0;
}


