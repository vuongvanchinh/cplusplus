#include<iostream>
#include<console.h>
#include<Windows.h>
using namespace std;
int k=100;
int n=6;
void C(int x, int y, int m)
{
	
  // sang trai
	for(int i=x; i>=x-n; i--)
	{
		TextColor(m);
		gotoXY(i,y);
		cout<<"*";
		Sleep(k);
	//	clrscr();
	}
	for(int j=y; j<=y+n; j++)
	{
		gotoXY(x-n,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	//sang phai
	for(int i=x-n; i<=x; i++)
	{
		TextColor(m);
		gotoXY(i,y+n);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	
}
void H (int x, int y, int m)
{
	//gach dau;
	for(int j=y; j<=y+n; j++)
	{
		gotoXY(x,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	//gach hai
	for(int j=y; j<=y+n; j++)
	{
		gotoXY(x+n,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	//gach ngang
	for(int i=x+1; i<x+n; i++)
	{
		gotoXY(i,y+n/2);
		TextColor(m);
		cout<<"*";
		Sleep(k);
	}
}
//chu i
void I (int x, int y, int m)
{
	//gach tren
	for(int i=x-1;i<=x+1; i++)
    {
    	gotoXY(i,y);
		TextColor(m);
		cout<<"*";
		Sleep(k);
	}
	for(int j=y+1; j<y+n; j++)
	{
		gotoXY(x,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	//gach duoi
	for(int i=x-1;i<=x+1; i++)
    {
    	gotoXY(i,y+n);
		TextColor(m);
		cout<<"*";
		Sleep(k);
	}
}
//chuN
void N(int x, int y, int m)
{

	//first line
	//gach dau;
	for(int j=y; j<=y+n; j++)
	{
		gotoXY(x,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	//gach hai
	for(int j=y; j<=y+n; j++)
	{
		gotoXY(x+n,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	//gach cheo
	int temp=y+1;
	for(int i=x+1; i<x+n; i++)
	{
		
		gotoXY(i, temp);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		temp ++;
	}
}
void O(int x, int y, int m)
{
	
  // sang trai
	for(int i=x; i>=x-n; i--)
	{
		TextColor(m);
		gotoXY(i,y);
		cout<<"*";
		Sleep(k);
	//	clrscr();
	}
	for(int j=y; j<=y+n; j++)
	{
		gotoXY(x-n,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	//sang phai
	for(int i=x-n; i<=x; i++)
	{
		TextColor(m);
		gotoXY(i,y+n);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	//?i lên
	for(int j=y+n-1; j>y; j--)
	{
		gotoXY(x,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	
	
}
void V(int x, int y, int m)
{
	int temp=y;
	for(int i=x; i<x+n/2; i++)
	{
		
		gotoXY(i, temp);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		temp +=2;
	}
	for(int i=x+n/2+1; i<=x+n+1; i++)
	{
		
		gotoXY(i, temp);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		temp -=2;
	}
}
//chu E
void E(int x, int y, int m)
{
	
  // sang trai
	for(int i=x; i>=x-n; i--)
	{
		TextColor(m);
		gotoXY(i,y);
		cout<<"*";
		Sleep(k);
	//	clrscr();
	}
	for(int j=y; j<=y+n; j++)
	{
		gotoXY(x-n,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	//sang phai
	for(int i=x-n; i<=x; i++)
	{
		TextColor(m);
		gotoXY(i,y+n);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	for(int i=x-n+1; i<=x; i++)
	{
		TextColor(m);
		gotoXY(i,y+n/2);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	
}
//chu L
void L(int x, int y, int m)
{
	//gach dau;
	for(int j=y; j<=y+n; j++)
	{
		gotoXY(x,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	//gach ngang
	for(int i=x+1; i<=x+n; i++)
	{
		gotoXY(i,y+n);
		TextColor(m);
		cout<<"*";
		Sleep(k);
	}
}
void U(int x, int y, int m)
{
	//gach dau;
	for(int j=y; j<=y+n; j++)
	{
		gotoXY(x,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	//gach ngang
	for(int i=x+1; i<=x+n; i++)
	{
		gotoXY(i,y+n);
		TextColor(m);
		cout<<"*";
		Sleep(k);
	}
	//gach len
	for(int j=y+n; j>=y; j--)
	{
		gotoXY(x+n,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	
}
void Y(int x, int y, int m)
{
	int temp=y;
	for(int i=x; i<x+n/2; i++)
	{
		
		gotoXY(i, temp);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		temp ++;
	}
	for(int i=x+n/2; i<=x+n; i++)
	{
		
		gotoXY(i, temp);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		temp --;
	}
	for(int j=y+n/2; j<=y+n; j++)
	{
		gotoXY(x+n/2,j);
		TextColor(m);
		cout<<"*";
		Sleep(k);
		//clrscr();
	}
	
}

int main()
{
   //your code here
 /*  C(10,5, 1);
   H(13,5,2);
   I(24,5,3);
   N(28,5,4);
   H(38,5,5);
   
   O(10,10,10);
   V(10,10,11);
   E(10,10,10);
   U(10,10,10);*/
   
   I(18,10,1);
   L(28,10,2);
   O(42,10,3);
   V(44,10,4);
   E(59,10,5);
   Y(68,10,6);
   O(82,10,7);
   U(84,10,9);
   
   cout<<"\n\n\n\n\n\n\n";
   
   cout<<"hihi";
   return 0;
}


