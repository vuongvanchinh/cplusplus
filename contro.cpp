#include<iostream>
#include<cstring>
using namespace std;
void reverse(char *s)
{
    
    for(int i=0; i<strlen(s)/2;i++)
    {
        char a=*(s+i)
        *(s+i)=*(s+l-1-i);
        *(s+l-1-i)=a;
    }
}
int main()
{
   //your code here
   char s[100];
   cin>>s;
   reverse(s);
   
   
   return 0;
}


