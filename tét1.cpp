#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int search(vector<int> a, int low, int high, int n )
{
	if(n<0)return -1;
	int	mid=low+(high-low)/2;
	if(low==high) return -1;
	if(a[mid]==n)
		return mid;
	
	if(a[mid]<n)
		return search(a,mid+1,high,n);
	if(a[mid]>n)
		return search(a,low, mid,n);
	
}
int a[10000][3];

int main()
{

	string a,b;
	cin>>a>>b;
	
	string c=a; 
	a=b; 
	b=c;
	cout<<a<<" "<<b;
	
	return 0;
}
