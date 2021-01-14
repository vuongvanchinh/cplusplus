#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   //your code here
   int n;
   
   cin>>n;
   for(int y=n; y>=-n; y--)
   {
   		for(int x=-n; x<=n; x++ )
   		{
   			if(y==-abs(x)+n||y==abs(x)-n||y==0||x==0)cout<<"* ";
   			else if(y<-abs(x)+n&&y>abs(x)-n) cout<<"  ";
   				else cout<<". ";
		   }
		   cout<<endl;
   }
   
   return 0;
}


