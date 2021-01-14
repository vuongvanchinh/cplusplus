#include<iostream>
#include<cstring>
using namespace std;
bool kiemtraxauxung(char a[])
{
	int l=strlen(a);
	for(int i=0; i<l/2; i++)
	{
		if(a[i]!=a[l-1-i])
		return false;
	}
	return true;
}
int main()
{
   //your code here
   char a[100];
   cin>>a;
   if(kiemtraxauxung(a))cout<<"Yes";
   else cout<<"No";
   
   return 0;
}


