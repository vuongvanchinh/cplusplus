#include<iostream>
#include <console.h>
#include<Windows.h>
using namespace std;
void C(int i, int j);
int main()
{
/*	int i=20, j=10, up, down, right, left;
    
	while ()
	{
			
		gotoXY( i, j);
		TextColor(i);
	    cout <<"(^-^)";
	    Sleep(50);
	    //sang phai
	    if(i==20&&j==10)
	    {
	    	right=1;
	    	down=0;
	    	up=0;
	    	left=0;
		}
		//di xuong
	    if(i==75&&j==10)
	    {
	    	right=0;
	    	down=1;
	    	up=0;
	    	left=0;
		}
		//sang trai
		if(i==75&&j==25)
		{
			right=0;
	    	down=0;
	    	up=0;
	    	left=1;	
		}
		//di leen
		if(i==20&&j==25)
		{
			right=0;
	    	down=0;
	    	up=1;
	    	left=0;	
		}		
		if(right==1)i++;
		else if(down ==1)j++;
			 else if(left==1) i--;
			      else if(up==1) j--;
	    clrscr();
	}
	*/
	C(10,10);

	return 0;
}
void C(int i, int j)
{
	
	int right, left , up, down;
	while (i!=10&&j!=25)
	{
			
		gotoXY( i, j);
		TextColor(i);
	    cout <<"(^-^)";
	    Sleep(50);
	    //sang trai
	    if(i==10&&j==10)
	    {
	    	right=0;
	    	down=0;
	    	up=0;
	    	left=1;
		}
		//di xuong
	    if(i==0&&j==10)
	    {
	    	right=0;
	    	down=1;
	    	up=0;
	    	left=0;
		}
		//sang pai
		if(i==0&&j==25)
		{
			right=1;
	    	down=0;
	    	up=0;
	    	left=0;	
		}
		/*/di leen
		if(i==20&&j==25)
		{
			right=0;
	    	down=0;
	    	up=1;
	    	left=0;	
		}		*/
		if(right==1)i++;
		else if(down ==1)j++;
			 else if(left==1) i--;
			      else if(up==1) j--;
	    clrscr();
    }
	
}
