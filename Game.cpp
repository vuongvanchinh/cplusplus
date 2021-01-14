#include<iostream>
#include<Windows.h>
#include <console.h>
#include<string>
#include<conio.h>
using namespace std;
int delay=100;//delay

void mainscreen(int dai, int rong, int x, int y)
{
	TextColor(3);
	for(int i=1; i<=rong; i++)
	{
		gotoXY(x-i,y);
		cout<<"*";
		//Sleep(delay);
	}
	for(int j=1;j<=dai; j++)
	{
		gotoXY(x-rong,y+j);
		cout<<"*";
	}
	for(int i=1; i<=rong; i++)
	{
		gotoXY(x-rong+i,y+dai);
		cout<<"*";
		//Sleep(delay);
	}
	for(int j=1;j<=dai; j++)
	{
		gotoXY(x,y+dai-j);
		cout<<"*";
		//Sleep(delay);
	}	
}

struct doituong
{
     string s;
	int x, y, color;
	doituong()
	{
		x=18;
		y=5;
		color=2;
	}	
};

int main()
{
	//mainscreen(25, 40, 50, 10,10);
	doituong A;
	A.s ="(^_^)";
	char keypower;
	int step=1;
	
	while (1)
	{
		clrscr();
	    mainscreen(25, 40, 40, 0);
	    
	    gotoXY(A.x,A.y);
		TextColor(A.color);
		cout<<A.s;
		// phat hien co input
		do
		{
			keypower=getch();
		}while(keypower!='A'&&keypower!='a'&&keypower!='D'&&keypower!='d'
				&&keypower!='W'&&keypower!='w'&&keypower!='S'&&keypower!='s');
		
		
		
		if(keypower=='A'||keypower=='a')
		{
			//sang trai
			A.x-=(A.x>1?step:0);
		}
		if(keypower=='D'||keypower=='d')
		{
			//sang phai
			A.x+=(A.x<35?step:0);
		}	
		if(keypower=='W'||keypower=='w')
		{
			//len tren
			A.y-=(A.y>1)?step:0;
		}
		if(keypower=='S'||keypower=='s')
		{
			//xuong duoi
			A.y+=(A.y<24?step:0);
		}
		keypower ='N';//khach asdw laf ddc 
		
	}
	
}
