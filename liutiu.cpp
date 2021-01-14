#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
char s[100];
int n;

void Delete(char s[], int n)
{	
	for (int i=n;i<=strlen(s);i++)
	s[i]=s[i+1];
}

void ChuanHoa(char s[], int n)
{
	while (s[0]==' ') Delete(s,0);
	while(s[strlen(s)-1]==' ') s[strlen(s)-1]='\0';
	for (int i=1;i<strlen(s);i++) 
	{
		if (s[i]==' ' && s[i+1]==' ')
		{
			Delete(s,i);
			i--;
		}
	}
}
int main()
{
	cout<<"Nhap chuoi: ";
	gets(s);
	ChuanHoa(s,n);
	puts(s);
}
