#include<iostream>
#include<string>
using namespace std;
int dodai (int n)
{
	int k=0;
	while(n!=0)
	{
		k++;
		n/=10;
	}
	return k;
}
int kemtrachan(int n)
{
	int l=dodai(n);
	for(int i=1; i<=l; i++)
	{
		if((n%10)%2!=0)	
		   return 0;
		n/=10;
	}
	return 1;
}
int kemtrale(int n)
{
	int l=dodai(n);
	for(int i=1; i<=l; i++)
	{
		if((n%10)%2==0)	
		   return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	int n ;
	cin>>n;
	cout<<
