#include<iostream>

using namespace std;
struct RoomPrice
{
	char maso;
	int gia;
	
};
int main()
{
   //your code here
   int n;
   cin>>n;
   RoomPrice a[n];
   for(int i=0; i<n; i++)
   {
   	cin>>a[i].maso>>a[i].gia;
   }
   int giamax=a[0].gia, chiso=0;
   for(int i=1; i<n; i++)
   {
   	if(a[i].gia>giamax)
   	{
   		giamax=a[i].gia;
   		chiso=i;
	}
   }
   cout<<a[chiso].maso;
   
   return 0;
}


