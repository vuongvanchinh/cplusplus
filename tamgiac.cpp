#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a, b, c, max;
	    cout <<"nhap  canh thu nhat  cua tam giac ";
	cin>>a;
		cout <<"nhap  canh thu hai  cua tam giac ";
	cin>>b;
		cout <<"nhap  canh thu ba  cua tam giac ";
	cin>>c;
	                                                        if (a>=b+c||b>=c+a||c>=b+c){ cout<<"ba canh nay la ba canh cua tam giac";
	                                                                                     if (a==b||a==c||b==c)cout<< "day la tam giac can" ;
	                                                                                     if (a*a==b*b+c*c||b*b==c*c+a*a||c*c==b*b+a*a)cout<<"day la tam giac vuong";}

                                                            else {
															      cout <"ba canh nay khong phai ba canh cua tam giac";}

