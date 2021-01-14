#include<iostream>
#include<string>
using namespace std;
string a, b, kq;
int la, lb;
void daonguoc()
{
	int l= kq.size();
	for(int i= 0; i<l/2; i++)
	{
		char temp=kq[i];
		kq[i]=kq[l-1-i];
		kq[l-1-i]=temp;
	}
}
void add()
{
	//a dai hon b 
	int nho=0;
	for(int i=0; i<=la-1; i++)
	{
		int tong =0;
		if(lb-i-1>=0)
		{
			tong=int(a[la-1-i]-'0')+int(b[lb-1-i]-'0')+nho;
				
		}else tong=int(a[la-1-i]-'0')+nho;
		    nho=0;
			char m=char(tong%10+'0');
			kq.push_back(m);
			nho+=tong/10;
		if(i==la-1&&nho!=0)
		{
		   	m=char(nho+'0');
		   	kq.push_back(m);
		 } 
	}
	
}
void dao()
{
	if(la<lb)
	{
		string temp=a;
		a=b;
	    b=temp;
	    int t=la;
	    la=lb;
	    lb=t;
	}
}

int main()
{
   //your code here
   cin>>a>>b;
   la=a.size();
   lb=b.size();
   dao();
  // cout<<a<<" "<<la<<" "<<b<<" "<<lb;
  // cout<<char(9+'0');
	add();
   daonguoc();
   cout<<kq;
   return 0;
}


