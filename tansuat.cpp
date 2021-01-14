#include<iostream>

using namespace std;
int a[100];
int hey[100]={};
int main()
{
   //your code here
   int n; 
   cin>>n; 
   
   for(int i=0;i<n; i++)
   	{
   		cin>>a[i];
   		hey[i]=0;
	   }
    	
   for(int i=0; i<n; i++)
   {
   		
   		if(hey[i]==0)
   		{
   			int dem=1;
   			for(int j=i+1; j<n;j++)
			{
				if(a[i]==a[j])
				{
					dem++;
					hey[j]=1;
				}
			}
			cout<<a[i]<<" : "<<dem<<"\n";	
		}
   		
   }
   
   return 0;
}


