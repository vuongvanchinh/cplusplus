#include<iostream>
#include<stdio.h>
using namespace std;
typedef struct maytinh
{
	char maso[20];
	char tenmay[50];
	char ncc[50];
	int gia;
	int namnhap;
 void nhapdulieu()
 {
 	cout<<"\nNhap ma so may: ";
 	fflush(stdin);
 	gets(maso);
 	cout<<"\nNhap ten may: ";
 	gets(tenmay);
 	cout<<"\nNhap NCC: ";
 	cin>>ncc;
 	cout<<"\nNhap gia: ";
 	cin>>gia;
 	cout<<"\nNhap nam nhap hang: ";
 	cin>>namnhap;
 	
 }
 void xuatdulieu()
 {
    cout<<"\nMa so: "<<maso;
 	cout<<"\nTen may: "<<tenmay;
 	cout<<"\nGia: "<<gia;
 	cout<<"\nNCC: "<<ncc;
 	cout<<"\nNam nhap hang: "<<namnhap;
 }
 
};
 int main(){
 	int n, tong=0, k=1, l=1;
	 float tongtl=0;
	 cout<<"\nNhap so may tinh: ";
	 cin>>n;
 	maytinh mt[100];
	 for(int i=1; i<=n; i++ ){
	 	mt[i].nhapdulieu();	
		 tong+=mt[i].gia;	
	 }
	 cout<<"\n\n\nTong gia tri mua cac may tinh:"<<tong;
	 cout<<"\n\n\nCac may den han thanh ly:";
	 for(int i=1; i<=n;i++){
	 	if(mt[i].namnhap<=2008){
	 		cout<<"\nMay thu"<<k<<": ";
	 		mt[i].xuatdulieu();
	 		tongtl+=mt[i].gia;
	 		k++;
		 }
	 }
	 cout<<"\n\n\nTong gia thanh ly: "<<(float)tongtl*30/100;
	 cout<<"\nCac may co gia hon 400$";
	 for(int i=1; i<=n;i++){
	 	if(mt[i].gia>=400){
	 		cout<<"\nMay thu "<<l<<": ";
	 		mt[i].xuatdulieu();
	 		l--;
		 }
	 }
	 
 	
 	
 	
 }
