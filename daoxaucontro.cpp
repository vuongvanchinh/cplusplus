#include<iostream>
using namespace std;
void daoxau(char *s){
	int len=0;
	while(s[len]!='\0')
	   len++;	  
	for(int i=0; i<len/2; i++){
		char tg=s[i];
		s[i]=s[len-1-i];
		s[len-1-i]=tg;
	}
}
void pad_right(char *s, int n){
    int len=0;
    while(s[len]!='\0')
      len++;
    for(int i=len; i<n; i++){
        s[i]='_';
    }
}
int main(){
	char s[100];
	cin>>s;
	int n;
	cin>>n;
//	daoxau(s);
    pad_right(s, n);
	cout<<s;
	return 0;
}
