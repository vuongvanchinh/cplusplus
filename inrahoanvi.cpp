#include<iostream>
using namespace std;
int a[100], n;
bool b[100];
void Out(int k)
{
	for(int i=0; i<k; i++)
	   cout<<a[i]<<" ";
	cout<<endl;
}
void hoanvi(int i)
{
	if(i==2) Out(2);
	else
	{
		for(int j=0; j<n; j++)
		{
			if(b[j]==false)
			{
				a[i]=j+1;
				b[j]=true;
				hoanvi(i+1);
				b[j]=false;
			}
		}
	}       
}
int main()
{
	cin>>n;
	for(int i=0; i<n; i++)
	    b[i]=false;
	    hoanvi(0);
	    return 0;
	
}
