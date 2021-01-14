#include<iostream>
//phantich ra thuwa so nguyen to
using namespace std;
int n;
int dem2=0, dem3=0;
int main()
{
   //your code here
   cin>>n;
   
   		while(n!=0)
	   	{
	   	   if(n%2==0)
			{
			   dem2++;
			   n/=2;	
			 }
			else
			{
			   dem3++;
			   n/=3;	
			 }	
		}
   
   return 0;
}


