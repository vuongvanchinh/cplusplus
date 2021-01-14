#include<iostream>
#include<fstream>
using namespace std;
int n; float t, v;
struct Diem
{
	float toan, van;
	double trungbinh()
	{
		return (toan + van)/2;
	}
};
Diem a[100];

int main()
{
   //your code here
   cin>>n;
   //ghi vao file 
  ofstream file("fileghi1.txt");
   		for(int i=0; i<n; i++)
   		{
   			cin>>t>>v;
   			file<<t<<" "<<v<<" ";	
	    }
	file.close();
	    // doc tu file
     ifstream f("fileghi1.txt");
   		for(int i=0; i<n; i++)
   		{
   			
   			
   	    	f>>a[i].toan;
			f>>a[i].van;
	    }
	    f.close();
	 //sap xep
	 for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(a[i].trungbinh()<a[j].trungbinh())
			{
				Diem temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
     
	//in ra
	for(int i=0; i<n; i++)
		cout<<a[i].trungbinh()<<" ";
   return 0;
}


