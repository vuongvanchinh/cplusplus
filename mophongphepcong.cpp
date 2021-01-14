#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void addFunction(int a, int b) 
{
    int count=0, a1=a, b1=b;//sao chep bien ao
    do
    {
    	count++;                           //ham tim do dai so co abs lon nhat trong cac  chu so
    	a1/=10;                              //count se bangg do dai lon nhat;
    	b1/=10;
	} while (a1!=0||b1!=0);
	cout <<setw(count+1)<<a<<endl;//dong 1: 1 o
	cout<<(b<0? "-" :"+") <<setw(count)<<abs(b)<<endl;//dong 2:b>0 thi co dau cong b<0 thi co dau tru sau do laf abs a
	cout<< string(count + 1,'-')<<endl;//dong b laf in ra stringcount +1 ki tu '-'
	cout<< setw(count + 1)<<a+b;//in ra ket qua
}
int main()
{
	int a, b;
	cin>>a>>b;
	addFunction(a, b);
}
