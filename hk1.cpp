#include<iostream>
#include<cmath>
#define nmax 100
using namespace std;
int ucln(int a, int b)
{
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		a=(a>b?a-b:a);
		b=(b>a?b-a:b);
	}
	return a;
}
struct  Phanso
{
	int tu, mau;
	 void khoitao(int &tu, int &mau, int &n)
	{
		
		tu=tu/n;
	    mau=mau/n;
	}
	
   void	print()
   {
   	  if(tu%mau==0)cout<<tu/mau;
   	  else
   	  
   	  	if(tu<0||mau<0) cout<<"-"<<abs(tu)<<"/"<<abs(mau)<<" ";
   	  	else cout<<tu<<"/"<<mau<<" ";
   }
};
int main()
{
	int n;
	cin>>n;
    Phanso hk[n];
    int tu, mau;
	for(int i=0; i<n; i++)
	{
	   cin>>hk[i].tu>>hk[i].mau;
	    int k=ucln(hk[i].tu, hk[i].mau);
	    hk[i].tu=hk[i].tu/k;
	    hk[i].mau=hk[i].mau/k;
	//	hk[i].print();    
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		    if((float)hk[i].tu/hk[i].mau>(float)hk[j].tu/hk[j].mau)
		    {
		    	Phanso tam;
		    	tam=hk[i];
		    	hk[i]=hk[j];
		    	hk[j]=tam;
			}
	}
	
	for(int i=0; i<n; i++)
	    hk[i].print();
	    
	
}
