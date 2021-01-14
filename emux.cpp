#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int  x, k=1, giaithua=1;
	cin>>x;
	
     float sum1=1, sh =1;
		while (sh > 0.001)
		{
			sh *= x*1.0/k*1.0;
			sum1+=sh*1.0;
			k++;
		}
		cout<<setprecision(4)<<fixed<<sum1;
	
}
