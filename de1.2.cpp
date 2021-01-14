#include<iostream>
int n ,lemax=0;

using namespace std;

int main()
{
   //your code here
   cin>>n;
   int a;
   for(int i=0; i<n; i++)
   {
   	cin>>a;
   	if(a%2!=0&&a>lemax)
   		lemax=a;
   }
   if(lemax==0)cout<<"INVALID";
   else cout<<lemax;
   
   
   return 0;
}


