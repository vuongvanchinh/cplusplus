#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
	char a[100];
//	a= new char[10];
   gets(a);
  // strcpy(a, a+1);
 //  cout<<a[0];
	int l= strlen(a);
   		while(a[l-1]==' '){
		 strcpy(a+l-1, a+l);
		   l--;
   	     }
	   
        
    	while(a[0]=' '){
		strcpy(a, a+1);
	}
	for(int i=0; i<strlen(a); i++){
		while(a[i]==' '&& a[i+1]==' '){
			strcpy(a+i, a+1+i);
		}
	}
	  cout<<a;
}
