#include <iostream>
using namespace std;
int main()
{
      int soluong;
      float dongia, giamgia, cuocvanchuyen, sotienphaitra;
      cout <<"nhap so luong: ";
      cin>>soluong;
      cout <<"nhap don gia: ";
      cin>> dongia;
      giamgia = soluong*dongia*12/100;
      cuocvanchuyen = soluong*dongia*5/100;
      sotienphaitra = soluong*dongia-giamggia+cuocvanchuyen;
        cout<<"giamgia: "<<giamgia;
        cout<<"cuoc van chuyen: "<<cuocvanchuyen;
        cout<<"so tien phai tra: "<<sotienphaitra;
   return 0;
}
