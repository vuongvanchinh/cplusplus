#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int kiemtra(char a[], int l){
	for(int i=0; i<l/2 ;i++){
		if(a[i]!=a[l-1-i])return 0;
	}
	return 1;
}
int main(){
	char a[100];
	gets(a);
	int l=strlen (a);
	if(kiemtra(a, l)==1)cout<<" doi xung";
	else cout<<"khong doi xung";
	return 0;
}
