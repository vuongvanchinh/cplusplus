#include<bits/stdc++.h>
using namespace std;
int kiemtra(char a[1000],char b[1000]){
    int la=strlen(a), lb=strlen(b);	
    
    for(int i=0; i<la; i++){
    	if(a[i]>='A'&&a[i]<='Z'){
		 int dem1=0;
		     for(int j=0; j<lb; j++){
		     	if(a[i]!=b[j])dem1++;
			 }
			 if(dem1=lb)return 0;	
			              	
	}}
	char *c, *d;
   	c=strlwr(a);
	d=strlwr(b);
	int dem=0;
	for(int i=0; i<lb; i++){
		for(int j=0; j<la;j++){
			if(d[i]==c[j]){
		                    dem++;
							break;	}
		}
	}
	if(dem=lb)return 1;
	

}

int main(){
	int n;
	cin>>n;
	char a[1000], b[1000];
	for(int i=1; i<=n;i++){
		cin>>a>>b;
	cout<<	(kiemtra(a, b)==1?"YES":"NO");
	}
}
