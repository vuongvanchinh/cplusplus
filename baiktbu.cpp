#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
vector<string> ahihi(char *Filename)\
{
	vector<string>out;
	
	string str;
	ifstream file(Filename);
	string cham=".", phay=",";
	
	while(!file.eof())
	{
		char a[20];
		//so dau cham or phay
		int k=0;
		file>>str;
		int l=str.length();
		//xoa cac dau cham or phay dong thoi luu cac dau cham or phay
		while(str[l-1]==','||str[l-1]=='.')
		{
			a[k]=str[l-1];
			k++;
			str.erase(l-1);
			l--;
		}
		out.push_back(str);
		for(int i=k-1 ;i>=0; i--)
		   if(a[i]==',')
		       out.push_back(phay);
		   else 
		       out.push_back(cham);
	}
	return out;
	
	
}
int main()
{
	char Filename[30]="filetest.txt";
	for(int i=0; i<ahihi(Filename).size(); i++)
	   cout<<ahihi(Filename)[i]<<" ";
}
