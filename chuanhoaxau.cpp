#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
char a[100], temp[100];
void  chuanhoa()
{
	// dau cach dau chuoi
	while(a[0]==' ')
	{
		strcpy(a,a+1);
	}
	//dau cach cuoi chuoi
	int l=strlen(a);
	while(a[l-1]==' ')
	{
		a[l-1]='\0';
		l--;
	}
	//dau cach thua o giua chuoi
	for(int i=0; i<strlen(a)-1; i++)
		while(a[i]==' '&&a[i+1]==' ')
		{
			strcpy(a+i,a+i+1);
			
		}
}
int main()
{
	

   //your code here
   gets(a);
   chuanhoa();
   cout<<a<<" "<<strlen(a);
   
   return 0;
}


