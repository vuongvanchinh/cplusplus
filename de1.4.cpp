#include<iostream>

using namespace std;
struct RoomPice
{
	char msp[20];
	int gia;
};

int main()
{
   //your code here
   int n,k;
   cin>>n;
   RoomPice a[51];
   for(int i=0; i<n; i++)
   		cin>>a[i].msp>>a[i].gia;
   	int giamax=a[0].gia;
   	for(int i=0; i<n; i++)
   		if(a[i].gia>giamax)
   		{
   			giamax=a[i].gia;
   			k=i;
		}
   cout<<a[k].msp;
   return 0;
}


