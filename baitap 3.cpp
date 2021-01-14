#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	float x,k;
	cout<<"nhap so nguyen n :";
	cin>>n;
	cout <<"nhap so thuc x:";
	cin>>x;
	k=pow(x*x+x+1,n)+(x*x-x+1,n);
	cout<<k;
return 0;
}
