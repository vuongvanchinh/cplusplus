#include <iostream>
#include <conio.h>
#include <dos.h>
#include<cstring>
using namespace std;
int main()
{
char qc[100] = "Quang c�o mien phi: Kh�ng c� tien th� kh�ng c� kem. ";
int dd = strlen(qc);
char tam[100] ; strcpy(tam, qc) ;
strcat(qc, tam) ; // nh�n d�i d�ng qu?ng c�o
//clrscr(); // xo� m�n h�nh
char hien[31] ; // ch?a x�u d�i 30 k� t? d? hi?n
int i = 0;
while (!kbhit()) { // trong khi chua ?n ph�m b?t k?
strncpy(hien, qc+i, 30);

hien[30] = '\0'; // copy 30 k� t? t? qc[i] sang hien
gotoxy (20,10); cout << hien ; // in hien t?i d�ng 10 cot 20
delay (100); // t?m d?ng 1/10 gi�y

i++; if (i==dd) i = 0; // tang i

}
}
