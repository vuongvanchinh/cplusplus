#include<iostream>

using namespace std;

int main()
{
   //your code here
   bool b[5]={false,false,false,false,false};
   int A[5]={5,4,3,1,2};
   int posmin, n=5;
   for(int i=0; i<n; i++)
   {
   	 posmin=posmin+1;
   	 for(int j=0; j<n; j++)
   	 {
   	 	if(A[j]<A[posmin] &&b[j]==false)
   	 	{
   	 		posmin=j;
		}
	 }
	 cout<<A[posmin]<<" ";
	 b[posmin]=true;
   }
   
   return 0;
}


