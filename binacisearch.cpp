#include<iostream>

using namespace std;
void swap(int* a, int* b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int partion(int a[], int low, int high)
{
	int p=a[high];
	int i=low-1;
	for(int j=low; j<high; j++)
	{
		if(a[j]<p)
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[high],& a[i+1]);
	return i+1;
	
	
	
}
void quicksort(int a[], int low, int high)
{
	if(low<high)
	{
		int pi=partion(a, low, high);
		quicksort(a,low, pi-1);
		quicksort(a,pi+1, high);
		
	}	
}
void output(int a[],int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
int search(int a[], int low, int high, int n )
{
	int	mid=low+(high-low)/2;
	
	if(a[mid]==n)
		return mid;
	if(a[mid]<n)
		return search(a,mid,high,n);
	if(a[mid]>n)
		return search(a,low, mid,n);
	return -1;
}

int main()
{
   //your code here
   int n=10;
   int a[10]={5, 2 ,1 ,4 ,3,6,9,8,7,10};
   quicksort(a,0,n);
   output(a, n);
   cout<<search(a,0,10,10);
   
   return 0;
}


