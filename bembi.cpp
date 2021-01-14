#include<bits/stdc++.h>  
using namespace std;
main()  
{  
int n;
cin>>n;
int a[50];
for(int i=0;i<50; i++){
	a[i]=2;
}
int i=0;
do{
	a[i]=n%2;
	n/=2;
	i++;
	if(n/2==0)a[i]=1;
}
while(n/2!=0);
for(int k=50;k>=0; k--){
if(a[i]<2)cout<<a[i];
}
}
