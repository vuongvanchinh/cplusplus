#include<string>
#include<iostream>
using namespace std;

int main()
{
	string a,b;
	getline(cin,a);
	//cin>>b;
	//a.swap(b);//hoan doi a b
     //
	 //cout<<" "<<b;
	//cout<<a.size();
	   //in ra 5 ki tu tu vi tri o;
      //cout<<a.substr(0,5);
      //chen "van " vao vi tri t6 cua string
    //  a.insert(6, "van ");
      //a.insert(6,1,'c');
      // xoa n ki tu tu vi tri pos4
      //a.erase(15,5);
      //cout<<a;
      //in ra vi tri xua hien dau tien cua chuoi"chinh" trong string
      //cout<<a.find("chinh");
      //tim tu vi tri 10
     // cout<<a.find("chinh", 10);
     cout<<a.find("chinh", 2,10 );
	return 0;
}
