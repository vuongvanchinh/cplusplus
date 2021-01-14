#include<iostream>

using namespace std;
void swap (int *a, int* b)
{
	int k=*a;
	*a=*b;
	*b=k;
}
int parttion(int a[],int low,int high)
{
	int pivot=a[high];
	int i=low-1;
	for(int j=low; j<high; j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[high],&a[i+1]);
	return i+1;
}
void qicksort(int a[], int low, int high)
{
	int high1=parttion(a,low, high);
	if(low<high)
	{
		qicksort(a,low,high1-1);
		qicksort(a,high1+1,high);	
	}
}
void output(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
   //your code here
   int a[10]={10,3,9,6,4,2,5,0,7,1};
   qicksort(a,0,9);
   output(a, 10);
   return 0;
}


