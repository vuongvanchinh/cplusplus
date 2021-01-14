#include<iostream>
 using namespace std;
 int kiemtrasohoanhao ( int n);
 int main()
{
	int n;
	cout<<" nhap so nguyen n: ";
	cin>>n;
for (int i=1; i<=n; i++)	
	if (kiemtrasohoanhao(i) ==1) 
	     cout<<i<<" ";
 }  	
  	int kiemtrasohoanhao(int n){
  	int	tong=0;
  		for (int i=1; i<n; i++)
  		if(n%i==0)tong+=i;
  		
  	if (tong==n) 
	  return 1;
	else 
	  return 0 ;
	  	
	  }
  	
  	
  	
  	


