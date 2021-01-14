#include<iostream>
using namespace std;
void Input (float *mang, int m, int n)
{
	
	for(int i=0; i<m; i++)
	   for(int j=0; j<n; j++)
	   {
	   	cin>>*(mang+i*n+j);
	   }
}
void Output(float *mang, int m, int n)
{
	for(int i=0; i<m; i++)
	{
	   for(int j=0; j<n; j++)
	   {
	   	cout<<*(mang+i*n+j)<<" ";
	   }
	  cout<<endl; 
   }
}
void chuanhoa(float *mang , int m, int n)
{
	for(int i=0; i<m; i++)
	{
	   for(int j=0; j<n; j++)
	   {
	   	if(*(mang+i*n+j)<0) *(mang+i*n+j)=0;
	   }
	  
   }
}
int main()
{
	int m, n;
	cin>>m>>n;
	
    float *mang = new float [m*n];
	
	
	Input(mang, m,n);
	chuanhoa(mang, m,n);
	Output(mang, m, n);
	delete mang;
}
