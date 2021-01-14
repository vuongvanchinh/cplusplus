#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   //your code here
   int n;
   cin>>n;
   for(int y=n; y>=0; y--)
   {
   		for(int x=-n+1; x<n; x++)
   		{
   			if(y<=-abs(x)+n-1) cout<<"* ";
   			else cout<<"  ";
		}
		cout<<endl;
   }
   
   return 0;
}


