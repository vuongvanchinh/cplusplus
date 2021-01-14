#include<bits/stdc++.h>
using namespace std;
bool b[100]={false};
int a[100];
void output(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
void hoanvi(int a[],int n, int k)
{
	for(int i=1; i<=n; i++)
	{
		if(b[i]==false)
		{
			a[k]=i;
			b[i]=true;
			
			if(k==n-1) output(a,n);
			else hoanvi(a,n, k+1);
			b[i]=false;
		}
		
		
	}
}

int main(){
	int n;

	cin>>n;
	
//	int a[n];
	hoanvi(a,n,0);
	return 0;
}
