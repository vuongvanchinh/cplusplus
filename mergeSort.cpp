#include<iostream>

using namespace std;

void merge(int a[],int left, int mid ,int right)
{
	int i, j, k;
	int n1=mid-left+1;//so phan tu cua Mang L
	int n2=right-mid;	// so phan tu cua Mang R
	int L[n1], R[n2];
	//sao chep du lieu vao hai mang
	for( i=0; i<n1; i++)
	{
		L[i]=a[left+i];
	}
	for( j=0; j<n2; j++)
	{
		R[j]=a[mid+j+1];
	}
	i=0;
	j=0;
	k=left;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=R[j];
		j++;
		k++;
	}
}
void mergeSort( int a[],int left, int right)
{
	if(left<right)
	{
		int mid=left+(right-left)/2;
		mergeSort(a,left,mid);
		mergeSort(a, mid+1, right);
		merge(a,left, mid , right);
	}
}
int main()
{
   //your code here
   int a[]={5,1,4,2,3};
   mergeSort(a,0,4);
   for(int i=0; i<5; i++)
   {
   		cout<<a[i]<<" ";
   }
   return 0;
}


