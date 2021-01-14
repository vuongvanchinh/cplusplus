#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
// ham doc file txt tach cac tu trong file thanh tung mang roi luu vao vector
vector <string> readFile(char *fileName)
{
	ifstream file(fileName);
	if(file.is_open())
	{
		cout<<"File is opened";
		string a;
		vector <string> k;
		while(!file.eof())
		{
			file>>a;
			k.push_back(a);
		}
		//in ra cac phan tu trong vecto k;
		for(int i=0; i<k.size(); i++)
		 {
		 	cout<<k[i]<<" ";
		 }
		return k;
	    }
	    else cout<<"Can not open file ";
}
int main()
{
    char fileName[100];
    cin>> fileName;
    readFile(fileName);
    
}
