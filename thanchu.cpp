#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
   //your code here
   int n;
   cin>>n;
   string thanchu;
   fflush(stdin);
   getline(cin,thanchu);
   for(int i=0; i<n; i++)
   cout<<thanchu<<endl;
   return 0;
}


