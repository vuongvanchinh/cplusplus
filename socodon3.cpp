#include<iostream>
using namespace std;

int  demso(int a[], int &n);

int main()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0; i<n; i++)
	{
	    cin>>a[i];
	}
	cout<<demso(a, n);

}
int demso(int a[], int &n)
{
    for(int i=0; i<n; i++)
	{
		int dem=1;
		for(int j=i+1; j<n;j++)
		{
			if(a[i]==a[j])
			{
				dem++;
				for(int k=j; k<n;k++ )
				{
					a[k]=a[k+1];
					
				}
				n--;
			}
		}
		if(dem==1)return a[i];
	}
			
}
