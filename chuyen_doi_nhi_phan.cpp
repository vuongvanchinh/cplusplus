#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   int a[100];
   long long nhiphan;
   cin>>nhiphan;
   int i=-1, n=0;
   while(nhiphan!=0)
   {
   		i++;
   		a[i]=nhiphan % 10;
   		nhiphan/=10;	
   }
   /*for(int j=0; j<=i; j++)
   {
   		cout<<a[j];
   }*/
   for(int j=i; j>=0; j--)
   {
   	 n+=pow(2,j)*a[j];
   }
   cout<<n;
   return 0;
}


