#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string a="bo an co";
	string ::iterator t, t2;
	vector <string> k;
	for(t=a.begin(); t<a.end();)
	{
		
		t2=find(t, a.end(),' ');
		if(t!=t2)k.push_back(string(t, t2));
		t=t2+1;
	}
	for(int i=k.size()-1; i>=0; i--)
	   cout<<k[i]<<" ";
}
