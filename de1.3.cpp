#include<iostream>
#include<cstring>
using namespace std;
bool ktxdx(char a[])
{
	int l=strlen(a);
	for(int i=0; i<l/2; i++)
	  if(a[i]!=a[l-1-i])return false;
	return true;
}


int main()
{
   //your code here
   char a[101];
   cin>>a;
   if(ktxdx(a))cout<<"yes";
   else cout<<"no";
   
   return 0;
}


