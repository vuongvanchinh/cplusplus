#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream f;
  f.open("filetest.txt",ios::in);
	int n;
	f>>n;
	while(n!=0){
		cout<<n%10;
		n/=10;
	}
	cout<<endl;
	if(n%4!=0)cout<<"d";
	else cout<<"s";
}
