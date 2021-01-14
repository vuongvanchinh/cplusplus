#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
char a[100];
void chuanhoa()
{
	// dau cach dau xau
	while (a[0]==' ')
	{
		strcpy(a, a+1);
	}
	// dau cach cuoi xau
	int l= strlen(a);
	while(a[l-1]==' ')
	{
		a[l-1]='\0';
		l--;
	}
	// giua xau
	for(int i=0; i<strlen(a)-1; i++)
		while(a[i]==' '&&a[i+1]==' ')
			strcpy(a+i, a+i+1);
			
	
}

int main()
{
   //your code here
   gets(a);
   chuanhoa();
   cout<<a;
   
   return 0;
}


