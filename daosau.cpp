#include<string.h>
#include<iostream>
using namespace std;

void reverse(char *s){
    char *begin,*end,i[1];
    begin=s;
    end=s;
    while(*end!='\0')end++;end--;
    while(begin<end){
        i[0]=*begin;
        *begin=*end;
        *end=i[0];
        begin++;
        end--;
    }
}
int main()
{
	char a[4]="123";
	reverse(&a);
	cout<<a;
	return 0;
}
