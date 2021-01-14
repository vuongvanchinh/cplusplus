#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   //your code here
   int n;
   vector<int> a;
   do
   {
   	cin>>n;
   	if(n!=0)a.push_back(n);
   }while(n!=0 && a.size() <30);
   sort(a.begin(),a.end());
   for(int i=0; i<a.size(); i++)
		cout<<a[i]<<" ";
   return 0;
}


