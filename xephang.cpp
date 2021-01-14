#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
typedef struct sinhvien
{
	char hoten[50];
    float diemtrungbinh;
	int thuhang;
		
};
void nhapdulieu(sinhvien &sv){
	cout<<"\n Nhap ho ten sinh  vien: ";
	fflush(stdin);
	gets(sv.hoten);
	cout<<"\n Nhap diem trung binh: ";
	cin>>sv.diemtrungbinh;
}
void hoanvi(sinhvien &h1, sinhvien &h2){
	sinhvien tg=h1;
	h1=h2;
	h2=tg;
}
void xephang(sinhvien sv[], int n)
{
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(sv[i].diemtrungbinh<sv[j].diemtrungbinh){
				hoanvi(sv[i], sv[j]);
			}
		}
		}
		
	sv[0].thuhang=1;
	for(int k=1; k<n;  k++)
	    if(sv[k].diemtrungbinh==sv[k-1].diemtrungbinh)
		    {
			  sv[k].diemtrungbinh==sv[k-1].diemtrungbinh;}
		else
		 {
		    sv[k].diemtrungbinh=k+1;
		}	

}
void xuat(sinhvien sv[], int n)
{

	cout<<"\n+-----+--------------------------------------------------------+-------+--------+";
	cout<<"\n| STT |                   HO VA TEN                   | DTB   |THU HANG|";
	cout<<"\n+-----+--------------------------------------------------------+-------+--------+";
	for(int i=0; i<n; i++){
		cout<<" "<<i<<setw(28)<<sv[i].hoten<<"  |  "<<setw(3)<<sv[i].diemtrungbinh<<"  |"<<sv[i].thuhang<<" |";
        cout<<"\n+-----+--------------------------------------------------------+-------+--------+";
			}
}
int main(){
	sinhvien sv[100];
	int n; 
	cout <<"\nNhap so sinh vien: ";
	    cin>> n ;
	for(int i=1; i<=n; i++ ){
		cout<<"\nThong tin sinh vien "<<i<<": ";
        	nhapdulieu(sv[i]);
	}
	xephang(sv,n);
	xuat(sv, n);
	
}
