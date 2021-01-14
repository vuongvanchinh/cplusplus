#include<iostream>
#include<stdio.h>
using namespace std;
typedef struct nhanvien
{
	char masonhanvien[20];
	char hotennhanvien[50];
    char diachinhanvien[100];
	int canboquanly;
		
};
void nhapdulieu(nhanvien &nv){
	cout<<"\n Nhap ma so nhan vien: ";
	  fflush(stdin);
	gets(nv.masonhanvien);
	cout<<"\n Nhapho ten  nhan vien: ";
	  fflush(stdin);
	gets(nv.hotennhanvien);
	cout<<"\n Nhap dia chi nhan vien: ";
	//	fflush(stdin);
	gets(nv.diachinhanvien);
	cout<<"\n Nhap can bo quan ly nhan vien: ";
	//	fflush(stdin);
	cin>>nv.canboquanly;
				
}
void xuatdulieu(nhanvien nv)
{
	cout<<"\nMa so nhan vien: "<<nv.masonhanvien;
	cout<<"\nMa ho ten nhan vien: "<<nv.masonhanvien;
	cout<<"\nMa dia chi vien: "<<nv.masonhanvien;
	cout<<(nv.canboquanly==1? "\nLa can bo quan ly" : "\nLa nhan vien");
}
void xoa(nhanvien nv[], int k, int &n){
     for(int i=k; i<n ;i++){
     	nv[i]=nv[i+1];
	 }
	 n--;
}
void xoanhanvien(nhanvien *nv, int &n){
	for(int i=0; i<n; i++){
		if(nv[i].canboquanly==0){
			xoa(nv, i, n);
		}
	}
}

int main(){
	nhanvien nv[100];
	cout<<"Nhap so nhan vien: ";
	int n; cin>>n;
	for(int i=0; i<n; i++){
		nhapdulieu(nv[i]);
	}
	for(int i=0; i<n; i++){
	 xuatdulieu(nv[i]);
	}
	xoanhanvien(nv,n);
	for(int i=0; i<n; i++){
	 xuatdulieu(nv[i]);
	}
}
