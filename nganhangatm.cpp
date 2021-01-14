#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[4];
	for(int i=0; i<4; i++)
	{
		a[i]=0;
	}
	if(n%50000==0)
	{
		a[0]=n/500000;
		n=n-a[0]*500000;
		a[1]=n/200000;
		n=n-a[1]*200000;
		a[2]=n/100000;
		n=n-a[2]*100000;
		a[3]=n/500000;
	if(a[0]!=0)cout<<"500k "<<a[0]<<endl;
	if(a[1]!=0)cout<<"200k "<<a[1]<<endl;
	if(a[2]!=0)cout<<"100k "<<a[2]<<endl;
	if(a[3]!=0)cout<<"50k " <<a[3]<<endl;
	}
	else cout<<"INVALID";
}
