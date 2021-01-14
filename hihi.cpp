#include<iostream>
#include<mangcontro.h>

using namespace std;

int main()
{
   //your code here
   int m,n;
   cin>>m>>n;
   float *a=new float [m*n];
   nhapmang1(a,m,n);
   xuatmang1(a,m,n);
   return 0;
}


