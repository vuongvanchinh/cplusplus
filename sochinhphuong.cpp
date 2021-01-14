#include<iostream>
#include<math.h>
using namespace std;
bool Sochinhphuong (unsigned long long n)
{
	if (n>0)
	{
		unsigned long long k=sqrt(n);
		if(k*k==n)return true;
	}
	return false;
}
int main()
{
	unsigned long long n;
	cin>>n;
	if(Sochinhphuong(n))cout<<"yes";
	else cout<<"no";
	return 0;
}
