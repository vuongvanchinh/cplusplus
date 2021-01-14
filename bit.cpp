#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, tong=0;
	cin>>n;
	while(n!=0){
		tong+=n%2;
		n=n/2;
	
	}
	cout<<tong;
}
