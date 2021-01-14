#include<iostream>
#include<cstring>
using namespace std;
string hihi(string a)
{
	 while(a[0]==' ')
   {
   		a.erase(0,1);
   		
   }
   //cuoi
   int l=a.length();
    while(a[l-1]==' ')
   {
   		a.erase(l-1,1);
   		l--;
   }
   //giua
   for(int i=0; i<l; i++)
   {
	   while(a[i]==' '&&a[i+1]==' ')
	   {
	   		a.erase(i+1,1);
	   		l--;
   	   }
   }
   return a;
}
int main()
{
   //your code here
   string a,b;
   getline(cin,a);
   b=hihi(a);
   int dem=1;
   for(int i=0; i<b.length(); i++)
   {
   		if(b[i]==' ') dem++;
   	}
   cout<<b<<"\n";
   cout<<"So tu: "<<dem;
   return 0;
}


