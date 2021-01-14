#include<iostream>
//#include<>
using namespace std;
struct time
{
	int st, en;	
    
};
int main()
{
	int n;
	cin>>n;
	time a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i].st>>a[i].en;
	}
	int demmax=0, hour;
	for(int i=0; i<=24; i++)
	{
		int dem =0;
		for (int j=0; j<n; j++)
		     {
		     	if(a[j].st<=i && i<= a[j].en) dem++;
			 }
	    if(dem>demmax)
		 {
	    	demmax=dem;
	        hour = i;
		 }
	}
	cout<<hour<<endl;
	for(int i=0; i<n; i++)
	{
		if(a[i].st<=hour && hour<= a[i].en) cout<<i+1<<" ";
	}

		
		
	
}
