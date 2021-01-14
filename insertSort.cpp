#include<iostream>

using namespace std;
void insertSort(int a[], int n)//5 4 3 
{
	int data;
	
	for(int i=1; i<n; i++)//5 1 3 2 4 || 1 5 3 2 4|| 1 3 5 2 4
	{
		data=a[i];
		int j=i-1;
		while(j>=0&&data<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=data;
	}
}
int main()
{
   //your code here
   int a[5]={5,1,3,2,4};
   insertSort(a, 5);
   for(int i=0; i<5; i++)
   {
   		cout<<a[i]<<" ";
   }
   return 0;
}


