//chuan hoa xau
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int  main(){
	
	string a;
  getline(std::cin,a);
	int l=a.length();
    //chuan_hoa_xau(a, l);
    for(int i=l-1; i>=0; i--){
		if(a[i]==' '){
			a[i]='\0';
			l--;
		}
		else break;
	}
	for(int i=0; i<l; i++){
		while(a[i]==' '){
			for( int j=i; j<l; j++){
				a[j]= a[j+1];
				
			}
			a[l-1]='\0';
			l--;
		}
	 break;
	}
	for(int i=0; i<l-1; i++){
		while(a[i]==' '&&a[i+1]==' '){
			for(int j=i+1; j<l; j++){
				a[j]=a[j+1];
			}
			a[l-1]='\0';
				l--;
		}
	}
	 cout<<a;


}
