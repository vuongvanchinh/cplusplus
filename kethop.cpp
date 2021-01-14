#include<iostream>
#include<fstream>

using namespace std;
struct Diem
{
	float toan, van;		
	float  TB()
	{
		return (toan+van)/2;
	}
};
int main()
{
   //your code here
   int n;
   cin>>n;
   Diem a[100];
    float t, v;
   ofstream file("fileghi1");
    for(int i=0; i<n; i++)
    {
    	cin>>t>>v;
    	file<<t<<" "<<v<<" ";
    	
	}
	
	file.close();
	ifstream f("fileghi1");
	   for (int i=0; i<n; i++)
	   {
	   	f>>a[i].toan>>a[i].van;
	   }
	   f.close();
	// sapxep
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(a[i].TB()<a[j].TB())
			{
				Diem temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	for(int i=0; i<n; i++)
		cout<<a[i].TB()<<" ";
  
   
   
   return 0;
}


