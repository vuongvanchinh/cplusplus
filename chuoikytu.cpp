#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main(){

char a[100];
gets(a);
int l=strlen(a);
int dem1=0,dem2=0, dem3=0;
for(int i=0; i<l; i++){
	if(islower(a[i]) )dem1++;
	dem2+=(isupper(a[i])==1?1:0);
	dem3+=(isalpha(a[i])==0?1:0);
}
cout<<"so phan tu chu thuong: "<<dem1<<endl;
cout<<"so phan tu chu hoa: "<<dem2<<endl;
cout<<"so phan tu khong phai chu cai: "<<dem3;
}
