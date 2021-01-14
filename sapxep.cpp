#include<iostream>
#include<vector>
using namespace std;

int main()
{
   //your code here
   vector<int> a;
   int n, dem=0;
   
   do
   {
   	 cin>>n;
   	 dem++;
   	 if(n!=0) a.push_back(n);
   	 else break;
   }while(dem<30);
   for(int i=0; i<a.size()-1; i++)
   {
   		for(int j=i+1; j<a.size(); j++)
   		{
   			if(a[i]>a[j])
   			{
   				int temp=a[i];
   				a[i]=a[j];
   				a[j]=temp;
			}
		   }
   }
   for(int i=0; i<a.size(); i++)
   	cout<<a[i]<<" ";

   
   return 0;
}


