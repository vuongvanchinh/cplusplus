#include<iostream>
#include<cmath>
using namespace std;
void Input(float **ptr,int m, int n )
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n ; j++)
		{
			cin>>*(*(ptr+i)+j);
		}
	}
}
void Output(float **ptr,int m, int n)
{
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n ; j++)
			{
				cout<<*(*(ptr+i)+j)<<" ";
			}
			cout<<endl;
		}
}
void Chuanhoa(float **ptr,int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n ; j++)
		{
			if(*(*(ptr+i)+j)<0) *(*(ptr+i)+j)=0;
		}
	}
}
int main()
{
	int m,n;
	cin>>m>>n;
	float **ptr=  new float *[m];
	for(int i=0; i<m; i++) 
	    *(ptr+i)=new float [n];
	Input(ptr, m, n);
	Chuanhoa(ptr, m, n);
	Output(ptr, m, n);
	delete ptr;
}
