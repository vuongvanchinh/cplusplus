#include<iostream>

using namespace std;
bool test(string a, string b, int k)
{
	for(int i=0; i<b.length(); i++)
	{
		if(a[i+k]!=b[i]) return false;
	}
	return true;
}
int main()
{
   //your code here
   string a, b;
   getline(cin,a);
   fflush(stdin);
   getline(cin,b);
   int la=a.length();
   int lb=b.length();
   int dem=0;
   for(int k=0; k<=la-lb+1; k++)
   {
   	 if(test(a,b,k)) dem++;
   }
   cout<<dem;
   
   return 0;
}


