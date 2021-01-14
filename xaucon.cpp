#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void hamcon(char *a, char *b){
	if(strstr(a, b))cout<<b<<" la xau con cua "<<a<<endl;
	else cout<<b<<" khong  la xau con cua "<<a<<endl;
	strcat(a," ");
	strcat(a, b);
	puts(a);
}
int main(){
	char a[100];
	gets(a);
	char b[100];
	gets(b);
	hamcon(a, b);
	return 0;
}
