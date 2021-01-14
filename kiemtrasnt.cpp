#include<iostream>
using namespace std;
int kiemtrasnt(int n);

int main() 
{
	int n ,tong=0;
	cout <<"nhap so nguyen n: ";
	cin>>n;
	for(int i=2; i<n; i++){
	
	if (kiemtrasnt(i)==1){
	   cout<<i<<" ";
	   tong+=i;}}
	 
    cout<<"tong cac so nguyen to: "<<tong;
	 
}
int kiemtrasnt(int n){
	int dem=0;
	for (int i=1; i<=n; i++)
	     if(n%i==0) dem++;
    if (dem==2)
        return 1;
    else
         return 0;
}

	

