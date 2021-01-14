#include<iostream>
#include<cstring>
#include<ctype.h>
#include<cmath>
using namespace std;
//tim nghiem gan dung cua phuong trinh e^x -1.5 treong khoang [0;1]
int main()
{
	float a=0, b=1, c;
	while(b-a>pow(10,-6))
	{
		c=(a+b)/2;
		//cout<<c<<endl;
  		float	fa=exp(a)-1.5,fc=exp(c)-1.5;
  		if(fa*fc==0)break;
  		if (fa*fc>0)a=c; else b=c;
  	}
  	cout<<"Nghiem gan dung cua phuong trinh e^x trong[0,1] la: "<<c<<" "<<exp(c)-1.5;
}
