#include<iostream>

using namespace std;
int A[10]={1,1,1,2,2,2,2,4,4,5};
int N=10;
bool B[10]={};
int main()
{
   //your code here
   int x=A[0], appearmax=1;
    for(int i=0; i<N; i++)
	{
		if(B[i]==false)
		{
			int solanxuathien=1;
			for(int j=i+1; j<N; j++)
			{
				if(A[i]==A[j] )
				{
					solanxuathien++;
					B[j]=true;
				}	
			}
			if(solanxuathien>appearmax)
			{
				x=A[i];
				appearmax=solanxuathien;
			}
			else if(solanxuathien==appearmax && A[i]<x)
			{
				x=A[i];
				appearmax=solanxuathien;	
			}	
		}
    		
	}
	cout<<x<<" "<<appearmax;
   
   return 0;
}


