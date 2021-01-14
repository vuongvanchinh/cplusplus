#include<iostream>

using namespace std;
int k;
string mang;
void  chuyen(int n)
{
	while (n!=0)
	{
		mang.push_back(char (n%10+'0'));
		n/=10;
	}
}
bool kiemtra()
{
	int l=mang.length();
	
	for(int i=0; i<l/2; i++)
	{
		if(mang[i]!=mang[l-1-i]) return false;
	}
	return true;
}
int main()
{
   //your code here
   int n;
   cin>>n;
   chuyen(n);
   if(kiemtra()) cout<<"Yes";
   else cout<<"No";
   
   return 0;
}


