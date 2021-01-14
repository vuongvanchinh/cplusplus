#include<iostream>
using namespace std;
#define  max_cot 100
#define  max_dong 100
void nhapmang(char a[][max_cot], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
}
void xuatmang(char a[][max_cot], int n)
{
	for(int i=0; i<n; i++)
     {
     for(int j=0; j<n; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	 }
}
int main()
{
	int n;
	cin>>n;
	char a[max_dong][max_cot];
	nhapmang(a,n);
	xuatmang(a,n);
	return 0;
	
}
