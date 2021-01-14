#include<iostream>
using namespace std;
bool testtang(int a[], int n){
	for(int i=0; i<n-1; i++)
		if(a[i]>a[i+1]) return false;
	return true;	
}
bool testgiam(int a[], int n){
	for(int i=0; i<n; i++)
	    if(a[i]<a[i+1])return false;
    return true;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n; i++)
	    cin>>a[i];
	if(testtang(a, n)==1)cout<<"Tang";
	else
	     if(testgiam(a, n)==1)cout<<"Giam";
	     else cout<<"Vo danh";
	 
}
	 
