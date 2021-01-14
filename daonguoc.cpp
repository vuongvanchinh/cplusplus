#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a=n;
	//kemtraxemco bao nhieu chu so
	int dem=0;
	while(a!=0){
		dem++;
		a/=10;
	}
	int tong=0;
	while(n!=0){
		
		tong+=n%10*pow(10,dem-1);
		n/=10;
		dem--;
	}
	cout<<tong;
}
