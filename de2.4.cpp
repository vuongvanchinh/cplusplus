#include<iostream>

using namespace std;
struct HinhChuNhat
{
	char maso[20];
	int ngan, dai;
	int chuvi()
	{
		return 2*(ngan+dai);
	}
};
int main()
{
   //your code here
   HinhChuNhat a[51];
   int n,k=0;
   cin>>n;
   for(int i=0; i<n; i++)
   		cin>>a[i].maso>>a[i].ngan>>a[i].dai;
   	int chuvimax=a[0].chuvi();
   	for(int i=1; i<n; i++)
   		if(a[i].chuvi()>chuvimax)
   		{
   			k=i;
   			chuvimax=a[i].chuvi();
   			
		   }
	cout<<a[k].maso;
   
   return 0;
}


