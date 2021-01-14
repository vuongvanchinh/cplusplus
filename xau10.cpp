#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int k=0;
int dodai (char a[])
{
	while (a[k] !='\0')
	{
		k++;
	}
	return k;

}
int main()
{
	char a[100000];
	int n; 
	cin>>n;
	for(int i =1; i<=n; i++)
	{
		fflush(stdin);
		cin>>a;
	    int l=dodai(a);
         if(l>10) 
        {
   	     cout<<a[0]<<l-2<<a[l-1];
        }
        else cout<<a;
		cout<<endl;
	}
	return 0;
}
