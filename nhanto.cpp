#include<iostream>
#include<cstring>
using namespace std;
void pushback(int a , string &kq, int &nho, int i, int m)
{
	char k;
	
	int temp=a%10+nho;//temp <20
	if(temp>=10)
	{
		int temp2=temp-10;//tepm2 <10
		nho=(a/10) + 1 ;
		k=(char )(temp2+'0');
	}else
	     {
	     	k=(char )(temp+'0');
	     	nho=(a/10);
		 }
    kq.push_back(k);
    if(i==m-1&&nho>0) kq.push_back((char)(nho +'0'));
}
void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 
int main()
{
	int nho=0, mang[100], m=0;
	string a, kq;
	char b;
	cin>>a>>b;
	int l=a.length();
	for(int i=l-1; i>=0; i--)
	{
		mang[m]= (int )(a[i]-'0')*(int)(b-'0');
		     m++;
	}
    for(int i=0; i<m; i++)
    {
    	pushback(mang[i],kq,nho,i, m);
	}
	reverseStr(kq);
	cout<<kq;
}
