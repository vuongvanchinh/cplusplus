#include<iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   if(n<=0)
   {
   		cout<<"NaN";
   }
   else
   {
   	 int gt=1;
   	 for(int i=2;i<=n; i++)
   	 {
   	 	gt*=i;
	 }
	 cout<<gt;
   }
   
   return 0;
}


