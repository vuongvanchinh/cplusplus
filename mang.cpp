#include<iostream>
using namespace std;
int kiemtra (int n)
{
	for(int i=2; i<n; i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}
void hoanvi (int &a, int &b)
{
	int tg=a;
	a=b;
	b=tg;
}
int main()
{
	int n; 
	cin>>n;
	int a[100];
	int b[100];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int k=0;
	for(int i=0; i<n; i++)
	{
		if(kiemtra(a[i])==1)
		{
			b[k]=a[i];
			k++;
		}
	}
	for(int i=0; i<k-1; i++)
	{
		for(int j=i+1; j<k; j++)
		{
		    if( b[i] > b[j])
		     {
			     hoanvi(b[i], b[j]);
		     }
	    }
	}
	for(int i=0; i<k; i++)
	{
		cout<<b[i]<<" ";
	}
	
}
