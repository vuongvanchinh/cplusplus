#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> K;
void tack(string Str)
{
	 while (!Str.empty())
    {
        K.push_back(Str.substr(0, Str.find(" ")));// add word to vector
        if (Str.find(" ") > Str.size()) //Check if found " " (Space)
        {
            break;
        }
        else
        {
            Str.erase(0, Str.find(" ") + 1); // Update string
        }
    }
}
/*void khoi_tao(string a)
{
	int left=0;
	int dodai;
	while(left<a.length()-2) // vuong van chinh
	{
		dodai=0;
		while(a[dodai]!=' '&&a[dodai]!='\0')
		{
			dodai++;
		}
		K.push_back(a.substr(left, dodai));
		
		left+=dodai+1;
	}
}
*/
string max(string a)
{
	tack(a);
	int demax=0;
	string tu=K[0];
	for(int i=0; i<K.size(); i++)
	{
		int dem=1;
		for(int j=i+1; j<K.size(); j++)
		{
			if(K[i].compare(K[j])==0)
				dem++;
		}
		if(dem>demax)
		{
			demax=dem;
			tu=K[i];
		}
	}
	return tu;	
}
int main()
{
   //your code here
   string a;
   getline(cin,a);
   
   
   
   cout<<max(a);
   
   return 0;
}


