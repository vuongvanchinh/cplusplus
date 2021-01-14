#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int i( string a , int l)
{
	for(int i=6; i<l-15; i++)
	{
		if (a[i]=='/' )return i;
	}
}
bool check(string a)
{
	int l=a.length();
	int dem1=0, dem2=0, k=i(a, l);
	for( int i=0;i<k; i++)
	{
		if (a[i]==' ')
		{
			dem1++;
		}
	
	}
		
	if(dem1!=5) return false;
	
		for(int j=k;j<l; j++)
		{
			if (a[j]==' ')
			{
				dem2++;
			}
		}
		if(dem2!=7) return false;
		
	
	return true;
}
int main()
{
   //your code here
   int socaptho;
   cin>>socaptho;
   fflush(stdin);
   string a;
   for(int i=0; i<socaptho; i++)
   {
   		getline(cin,a);
   		fflush(stdin);
   		//cout<<a;
   		cout<<(check(a)==true?"TRUE":"FALSE");
   		cout<<"\n";
	} 
   
   
   return 0;
}


