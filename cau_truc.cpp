#include<iostream>
#include<stdio.h>
using namespace std;
typedef struct sinhvien
{
	char maso[20];
    char hoten[50];
    char diachi[100];
    float toan, ly, hoa;
};
float diemtrungbinh(sinhvien sv)
{
	return (sv.toan+sv.ly+sv.hoa)/3;
}
void nhapsinhvien(sinhvien &sv)
{
	cout<<"\nNhap ma so sinh vien: ";
	cin>>sv.maso;
	cout<<"\Nhap ho ten: ";
	fflush(stdin);
	gets(sv.hoten);
	cout<<"\nNhap dia chi:";
	gets(sv.diachi);
	cout<<"\nNhap diem toan:";
	cin>>sv.toan;
	cout<<"\nNhap diem ly:";
	cin>>sv.ly;	
	cout<<"\nNhap diem hoa:";
	cin>>sv.hoa;
}
void xuatsinhvien(sinhvien sv)
{
	cout<<"\nMa so sinh vien: "<<sv.maso;
	cout<<"\nNho va ten : "<<sv.hoten;
	cout<<"\nDia chi: "<<sv.diachi;
	cout<<"\nDiem toan: "<<sv.toan;
	cout<<"\nDiem ly: "<<sv.ly;
	cout<<"\nDiem hoa: "<<sv.hoa;
	cout<<"\nDiem trung binh: "<<diemtrungbinh(sv);
	}
int main(){
	sinhvien sv;
	nhapsinhvien(sv);
	xuatsinhvien(sv);
}
