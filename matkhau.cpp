#include<iostream>
#include<conio.h>
#include <string.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main()
{
char pw[11]; int solan = 0; // Cho phep nhap 3 lan
do {

//clrscr(); gotoxy(30,12) ;
int i = 0;
while ((pw[i]=getch()) != 13 && ++i < 10) cout << 'X' ; // 13 = Enter
pw[i] = '\0' ;
cout << endl ;

if (!strcmp(pw, "HaNoi2000")) { cout << "Moi vào" ; break; }
else { 
        cout << "Sai mat khau. Nhap lai"<<endl ;
        sleep(1);
	    system("cls");
		 solan++ ; 
	}
} while (solan < 3);
}
