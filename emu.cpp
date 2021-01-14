#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int x,k=0;
	cin>>x;
	double sum=0, sh=1;
	while(sh>0.001)
	{
		sum+=sh;
		k++;
		sh=sh*x/k;
	}

	cout<<setprecision(4)<<fixed<<sum+sh;
	

   return 0;
}


