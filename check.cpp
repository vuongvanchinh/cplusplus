#include<iostream>

using namespace std;
string a;
bool check()
{
	int l=a.length();
	for(int i=0; i<l; i++)
	{
		if(a[i] <'0' || a[i]>'9')
		return false;
	}
	return true;
}
int main()
{
   //your code here
   cin>>a;
   if(check()==true)cout<<"YES";
   else cout<<"NO";
   return 0;
}


