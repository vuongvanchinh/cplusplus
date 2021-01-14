#include<iostream>
#
using namespace std;
void couts(int d, int m, int y)
{
	//ngay
	if (0<d &&d<10) cout <<"0"<<d<<"/";
	else cout<<d<<"/";
	//thang
	if (0<m&&m<10) cout <<"0"<<m<<"/";
	else	cout<<m<<"/";
	//nam
	if (0<y&&y<10) cout <<"000"<<y;
	else  if (10<=y&&y<100) cout <<"00"<<y;
		  else	if (100<=y &&y<1000) cout <<"0"<<y;
	            else	cout<<y;
	
}
int main()
{
   //your code here
   int d,  m,  y;
   cin>>d>>m>>y;
   couts(d,m ,y);
   
   return 0;
}


