#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a, int n)
{
	for(int i=0; i<n; i++){
		cin>>*(a+i);
		
	}
}
void xuatmang(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<*(a+i)<<"  ";
	}
}
int main(){
	int n,*a;
	cin>>n;
	a= new int[n];
	nhapmang(a, n);
	xuatmang(a, n);
}
