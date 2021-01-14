#include<iostream>
#include<console.h>
#include<Windows.h>
#include<conio.h>
#include<cstdlib>
using namespace std;
#define right 1
#define left 2 
#define up 3
#define down 4

int n;
struct pos
{
	
	int x, y;	
};
struct meet
{
 	int x; int y;
	meet()
	{
		x=10;
		y=20;
		}	
};
struct snake
{
	pos dot[100];
	//so dot;
	int n;
	
	int tt;
	snake()
	{	
		n=3;
		dot[0].x=40;
		dot[0].y=12;
		dot[1].x=39;
		dot[1].y=12;
		dot[2].x=38;
		dot[2].y=12;
	
		tt = right;	
	}	
	
};
void show(snake a, meet b)
{
	
	clrscr();
	
	gotoXY(b.x, b.y );
	TextColor(6);
	cout<<"*";
	for(int i=0; i<a.n; i++)
	{
		TextColor(2);
		gotoXY(a.dot[i].x, a.dot[i].y);
		cout<<(i==0?"O":"o");
	}
	gotoXY(0,0);
	cout<<a.n;
}
bool live(snake a)
{
	// xu ly cheet
		 for(int i=1; i<a.n; i++)
		 {
		 	if(a.dot[0].x == a.dot[i].x && a.dot[0].y == a.dot[i].y)
		 			return false;
		 }
		 return true;
}
void control(snake &a,meet &b)
{
	//truyen trangj thai
	for(int i= a.n-1; i>0; i--)
		a.dot[i] = a.dot[i-1];
		
   		if(kbhit())
		{
			char key= getch();
			if((key=='a'||key=='A') && a.tt !=right )
				a.tt = left;
			else if(key=='D'||key=='d'&&a.tt !=left)
						a.tt=right;
				 else if(key=='W'||key=='w'&&a.tt !=down)
						   a.tt=up;
					  else if(key=='S'||key=='s'&&a.tt !=up)
						      a.tt=down;
			
		}
		if(a.tt==left) a.dot[0].x-=n;;
		if(a.tt==right) a.dot[0].x+=n;
		if(a.tt==up) a.dot[0].y-=n;
		if(a.tt==down) a.dot[0].y+=n;
		//an
		if(a.dot[0].x==b.x&&a.dot[0].y==b.y)
		{
			b.x=rand() % 120 + 1;
			b.y=rand() % 30 + 1;
			a.n++;
		}
		//xu ly ra khoi man hinh
		if(a.dot[0].x>120)
		{
			a.dot[0].x=0;
			a.tt=right;
		}
		if(a.dot[0].x<0)
		{
			a.dot[0].x=120;
			a.tt=left;
		}
		if(a.dot[0].y<0)
		{
			a.dot[0].y=30;
			a.tt=up;
		}
		if(a.dot[0].y>30)
		{
			a.dot[0].y=0;
			a.tt=down;
		}
}
int main()
{
   snake a;
   	n=1;	
   	meet b;
   while(1)
   {
   	if(live(a) == false)
   		{
   			gotoXY(56,15);
   			cout<<"GAME OVER!";
   			while(_getch()!=13)
   			{
   				break;
			}
		}
   	   //hien thi 
   		show(a,b);
   		//xu ly neu chet
   		
		//dieeuf khien 
   		control(a,b);
   		
   		
   		//end  
   		Sleep(50);
   }
   return 0;
}


