#include<iostream>
using namespace std;
int main()
{
	int m, n;
	cin>>m>>n;
	int a[100][100];
    for(int i=0; i<m; i++)
    {
    	for(int j=0;  j<n; j++)
    	{
    		cin>>a[i][j];
    	}
    }
    int vitri, giatri;
    cin>> vitri>> giatri;
    for(int i=0; i<m; i++)
    {
    	for(int j=n;  j>=vitri; j--)
    	{
    		a[i][j]=a[i][j-1];
    	}
    	a[i][vitri-1]=giatri;
    }
    for(int i=0; i<m; i++)
    {
    	for(int j=0;  j<=n; j++)
    	{
    		cout<<a[i][j]<<" ";
    	}
    	cout<<endl;
    }
    return 0;

}
