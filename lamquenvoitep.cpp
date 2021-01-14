#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	fstream f;
  f.open("filetest.txt",ios::in);
  //int intval
   // f >> intVal;
	string a;
	 getline(f,a); 
	 int l=a.length();
	 for(int i=l-1; i>=0; i--)
   // for(int i=0; i<intVal+1; i++){
    // getline(f,a); 
   
  //  cout<<a<<endl;}	
  cout<<a[i];
	f.close();
}
