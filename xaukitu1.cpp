#include<iostream>;
#include<string.h>
#include<stdio.h>
//#include<ctype.h>
using namespace std;
int main(){
	char a [100];
	gets(a);
	int dem1=0, dem2=0, dem3=0;
	int l=strlen(a);
	for(int i=0; i<l; i++){
		dem1+=(islower(a[i])?1:0);
		dem2+=(isalpha(a[i])?1:0);
	    dem3+=(isupper(a[i])?1:0);

	}
	cout<<"so chu thuong:"<<dem1<<endl;
		cout<<"so chu hoa:"<<dem3<<endl;
		cout<<"so chu khong phai chu cai:"<<l-dem2<<endl;
	
}
