#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	if(n<100000) cout<<"avalid";
	else 
	{
		for(int i=0; i<6; i++)
		    n/=10;
		cout<<n%10;
	}
}
