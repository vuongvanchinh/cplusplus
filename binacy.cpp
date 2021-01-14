#include<iostream>

using namespace std;

int main()
{
   //your code here
   int n;
   int binacy[1000];
   cin>>n;
   int i=-1;
   while(n!=0)
   {
   		i++;
   		binacy[i]=n%2;
		n/=2;	
   }
   for(int k=i;k>=0;k-- )
   		cout<<binacy[k];
   
   return 0;
}


