#include<iostream>
//in ra cac chinh hop 
using namespace std;
bool b[]={false};
int a[100];
int n,k;
void Out()
{
	for (int i=0; i<k; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void Try(int i)
{
	for(int j = 0; j < n; j++ )
	{
		if(b[j]==false)
		{
			a[i]=j+1;
			b[j]=true;
			if(i==k-1)Out();
			else Try(i+1);
			b[j]=false;
		}
		
	}
}
int main()
{
   //your code here
   cin>>n>>k;
   Try(0);
   
   return 0;
}


