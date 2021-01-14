#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void chen(char *a, int k, int &l){
	while(k>=1){
		for(int i=l; i>=k; i--){
			a[i]=a[i-1];
		}
		a[k]='.';
		k=k-3;
		l++;
	}
	cout<<a;
}
void dinhdangtiente(char *a, int l){
	for(int i=0; i<l; i++){
		while(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'){
			strcpy(a+i, a+i+1);
		}
	}
    puts(a);
    int k=strlen (a)-3;
    chen(a, k, l);
}
int main(){
	char a[100];
	gets(a);
	int l=strlen(a);
	dinhdangtiente(a, l);
	return 0;
}
