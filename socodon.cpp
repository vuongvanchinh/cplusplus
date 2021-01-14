#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		int dem=1;
		for(int j=i+1;j<n; j++){
			if(a[i]==a[j]){
				dem++;
				for(int i=j; i<n-1; i++){
					a[i]=a[i+1];
					
				}
			    n--;
			}
		}
		if(dem==1)cout<<a[i]<<" ";
	}
}
