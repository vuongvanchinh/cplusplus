#include<iostream>

using namespace std;

int main()
{
   //your code here
   int n;
   cin>>n;
   for(int i=2; i<=n; i++)
   {
   	int dem=0;
   		while(n%i==0 && n!=1)
   		{
   			n/=i;
   			dem++;
		}
		if(dem!=0)
		{
			cout<<i<<"^"<<dem<<endl;
		}
   }
   
   return 0;
}


