#include<iostream>
#include<fstream>
#include<string>
using namespace std;
bool Kiemtradoixung (string a)
{
	int l=a.length();
	for(int i=0; i<l/2; i++)
	{
		if(a[i]!=a[l-1-i]) return false; 
	}
	return true;
}
//dong dau tien laf sos nguyen n , n dong tiep theo la cac string
void readfile(const char* path)
{
	ifstream file(path);
	    int n;
	    string a;
	    file>>n;
	    getline(file,a);
	    for(int i=0; i<n; i++)
	    {
	    	getline(file, a);
	    	if(Kiemtradoixung(a)) cout<<"yes"<<endl;
	    	else cout<<"no"<<endl;
		}
	
}
int main()
{
	char path[100];
	cin>>path;
	readfile(path);
}
