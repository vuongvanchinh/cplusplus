#include<iostream>

using namespace std;

int main()
{
   //your code here
   int n, dem=0;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++)
   {
   	 cin>>a[i];
   	 if(a[i]%3==0)
   	 {
   	 	cout<<a[i];
   	 	dem++;
		}
   }
   if(dem==0)cout<<"INVALID";
   
   
   return 0;
}


