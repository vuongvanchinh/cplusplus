#include<iostream>
#include<cmath>
using namespace std;
int ucln(int a, int b){
	a=abs(a); b=abs(b);
while(a!=0 &&b!=0){

	if (a>=b)
	  a-=b;
	else 
	  b-=a;}
if (a==0)
   return b;
else
   return a;
   	  
}
int main()
{
   //your code here
   int a, b;
   cin>>a>>b;
   cout<<ucln(a,b);
   
   
   return 0;
}


