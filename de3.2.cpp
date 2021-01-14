#include<iostream>

using namespace std;

int main()
{
   //your code here
   int n, chanmax=1,a;
   cin>>n;
   for(int i=0; i<n; i++)
   {
   		cin>>a;
   		if(a%2==0&&a>chanmax)
   			chanmax=a;
   			
   }
   if(chanmax==1)cout<<"INVALID";
   else
  		 cout<<chanmax;
   
   return 0;
}


