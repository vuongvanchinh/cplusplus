#include<iostream>

using namespace std;

int main()
{
   //your code here
   int n, dem, le1=1;
   cin>>n;
   int a[100];
   for(int i=0; i<n; i++)
   {
   	cin>>a[i];
   	dem+=(a[i]%2!=0? 1:0);
   	if(a[i]%2!=0&&a[i]>le1)
   	{
   		le1=a[i];	
	}
   }
   if(dem==0)cout<<"INVALID";
   else cout<<le1;
   
   
   return 0;
}


