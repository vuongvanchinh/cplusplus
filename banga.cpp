#include<iostream>
#include<console.h>
#include<Windows.h>
#include<conio.h>
using namespace std;
#define right 1
#define left 2
struct sung
{
	int x;
    int y;
    sung()
    {
    	x=15;
    	y=24;
	}
};
struct pos
{
	int x;
	int y;
};
struct ga
{
    int x;
	int y;
	int ttga;
	ga()
	{
		x=15;
		y=1;
		ttga=right;
	}	
};
struct dan
{
    int sodan;
    pos vien[100];
	dan()
	{
		sodan=1;
		vien[0].x=16;
		vien[0].y=23;
		
	}
};
void show(sung a, ga b, dan c)
{
	clrscr();
	// screen 
	for(int y=0; y<=a.y+2; y++)
	{
		gotoXY(33, y);
		putchar(179);
	}
	for(int x=0; x<=32; x++)
	{
		gotoXY(x,a.y+2);
		putchar(196);
	}
	//ga
	gotoXY(b.x,b.y);
	cout<<" o "<<endl;
	gotoXY(b.x,b.y+1);
	cout<<"oOo"<<endl;
	gotoXY(b.x,b.y+2);
	cout<<"o^o";
	// sung
	gotoXY(a.x, a.y);
	cout<<" o "<<endl;
	gotoXY(a.x,a.y+1);
	cout<<"oOo"<<endl;
	//dan
	
	for (int i=0; i<c.sodan; i++)
	{
		gotoXY(a.x,c.vien[i].y);
		cout<<"o";
	}
	
		
}
// dieu khien 
void control(sung &a)
{
	if(kbhit())
		{
			char key= getch();
			if((key=='a'||key=='A')&&a.x>=2 )
				a.x-=2;
			else if(key=='D'||key=='d'&&a.x<30)
						a.x+=2;
		}
}
void cga(ga &b)
{
	if (b.x==0&& b.ttga== left) b.ttga=right;
	if (b.x==30&& b.ttga== right) b.ttga=left ;	
	// di chuyen
	if(b.ttga==right)b.x++;
	else if(b.ttga==left) b.x--;
}

int main()
{
   //your code here
   sung a;
   ga b;
   dan c;
   while(1)
   {
   		show(a, b, c);
   		control(a);
   		cga(b);
   		c.vien[0].y--;
   		if(c.vien[0].y==0)c.vien[0].y=23;
   		Sleep(200);
   }
   
   
   return 0;
}


