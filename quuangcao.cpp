#include <iostream>
#include <conio.h>
#include <dos.h>
#include<cstring>
using namespace std;
int main()
{
char qc[100] = "Quang cáo mien phi: Không có tien thì không có kem. ";
int dd = strlen(qc);
char tam[100] ; strcpy(tam, qc) ;
strcat(qc, tam) ; // nhân dôi dòng qu?ng cáo
//clrscr(); // xoá màn hình
char hien[31] ; // ch?a xâu dài 30 kí t? d? hi?n
int i = 0;
while (!kbhit()) { // trong khi chua ?n phím b?t k?
strncpy(hien, qc+i, 30);

hien[30] = '\0'; // copy 30 kí t? t? qc[i] sang hien
gotoxy (20,10); cout << hien ; // in hien t?i dòng 10 cot 20
delay (100); // t?m d?ng 1/10 giây

i++; if (i==dd) i = 0; // tang i

}
}
