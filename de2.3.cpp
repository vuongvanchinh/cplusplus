#include<iostream>
#include<cstring>
using namespace std;
void daonguoc(char a[])
{
	int l=strlen(a);
	for(int i=0; i<l/2; i++)
	{
		char h=a[i];
		a[i]=a[l-1-i];
		a[l-1-i]=h;
	}
}
int main()
{
   //your code here
   char a[101];
   cin>>a;
   daonguoc(a);
   cout<<a;
   
   return 0;
}


