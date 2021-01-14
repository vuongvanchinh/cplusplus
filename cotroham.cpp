#include<iostream>
#include<cmath>
#include<graphics.h>
using namespace std;
float can(float a)
{
	return sqrt(a);
}

int main()
{
	
	setbkcolor(blue);
	float (*f)(float);
	f=can;
	cout<<f(4);
}
