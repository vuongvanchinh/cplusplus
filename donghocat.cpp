#include<iostream>
#include<cmath>
using namespace std;
// dong ho cat rong r dai n
int main()
{
   //your code here
   int n, r;
   cout<<"nua chieu cao: "<<endl;
   cin>>n;
   for(int y=n; y>=-n; y--)
   {
   	for(int x=-n; x<=n; x++)
   	{
   		if(y>=-n&&y<=-abs(x)||y<=n&&y>=abs(x)) cout<<"* ";
   		else cout<<". ";
	}
	cout<<endl;
   }
   
   return 0;
}


