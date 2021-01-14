#include <iostream>
#include <cstring>
using namespace std;

string Chuanhoa(string s){
	while (s[0]==' ') s.erase(0,1);
	int l=s.length();
	while (s[l-1]==' '){
		s.erase(l-1,1);
		l--;
	}
	for (int i=0;i<l;i++){
		if (s[i]==' ' && s[i+1]==' '){
			s.erase(i+1,1);
			i--;
		}
	}
	return s;
}

int Dem(string s){
	string c=Chuanhoa(s);
	int dem=1;
	for (int i=0;i<c.length();i++){
		if (c[i]==' '){
			dem++;
		}
	}
	return dem;
}
int main(){
	string s;
	getline(cin,s);
	cout<<Dem(s);
}
