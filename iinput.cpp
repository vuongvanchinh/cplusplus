#include<iostream>

using namespace std;
long long  temp[200];
void khoitao()
{
	for(int i=0; i<200; i++)
	{
		temp[i]=-1;
	}
}
int fibonaci(int n)
{
	if(temp[n]==-1)
	{
		if(n<=1) return n;
		else 
		{
				temp[n]=fibonaci(n-1)+fibonaci(n-2);	
		}
	}
		return temp[n];
}
int main()
{
   //your code here
   int n;
   cin>>n;
   khoitao();
   cout <<fibonaci(n);
   return 0;
}


