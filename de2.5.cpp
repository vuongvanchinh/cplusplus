
#include<iostream>
#include<vector>
using namespace std;
 vector<int> a;

void sort()
{
	for(int i=0; i<a.size()-1; i++)
		for(int j=i+1; j<a.size(); j++)
			if(a[i]<a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}
void out()
{
	for(int i=0; i<a.size(); i++)
		cout<<a[i]<<" ";
}
int main()
{
   //your code here
   int n;
   do
   {
   	cin>>n;
   	if(n!=0) a.push_back(n);
   }while(n!=0&&a.size()<30);
   sort();
   out();
   return 0;
}


