
#include<bits/stdc++.h> 

using namespace std;
string add(string a, string b)
{
	string result;
	
	int la=a.size(), lb=b.size();
	int i=0;
	int nho=0;
	int num=0;
	while(i<la&& i<lb)
	{
		num=int(a[la-i-1]-'0')+int(b[lb-i-1]-'0')+ nho;
		nho=num/10;
		result.push_back(char(num%10 +'0'));
		i++;
	}
	while(i<la)
	{
		num=int(a[la-i-1]-'0')+ nho;
		nho=(num/10);
		result.push_back(char(num%10 +'0'));
		i++;
	}
	while(i<lb)
	{
		num=int(b[lb-i-1]-'0')+ nho;
		nho=num/10;
		result.push_back(char(num%10 +'0'));
		i++;
	}
	if(nho>0) result.push_back(char(nho +'0'));
	//dao nguoc	
	reverse(result.begin(), result.end());
	
	return result;
}
string func(string s)
{
	int ls=s.size();
	int i=s.find('+');
	
	string a=s.substr(0,i);
	string b=s.substr(i+1,ls-i-1);
	cout<<a<<" "<<b<<'\n';
	return add(a, b);
}
int main()
{
  string s; cin>>s;
  
  string result=func(s);
  cout<<result;
	return 0;
}


