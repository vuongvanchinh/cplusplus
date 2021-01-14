#include<iostream>

using namespace std;
int k, n;
int a[100];

void printResult() { // h�m d�ng d? in m?t c?u h�nh ra ngo�i
    for(int i = 1 ; i <=k ; i++) {
        cout<<a[i]<<" " ;
    }
    cout<<endl ;
}
void backtrack(int i ) { // h�m quay lui
    for(int j = a[i-1]+1 ; j<=n-k+i ; j++ ) { // x�t c�c kh? nang c?a j
        a[i] = j ; // ghi nh?n m?t gi� tr? c?a j
        if(i==k) { // n?u c?u h�nh d� d? k ph?n t?
            // in m?t c?u h�nh ra ngo�i
            printResult() ;
        }
        else {
            backtrack(i+1) ; // quay lui
        }
 
    }
}
void toHop() { // h�m li?t k� c�c t? h?p
    if(k>=0 && k <=n ) {
        a[0] = 0 ; // kh?i t?o gi� tr? a[0]
        backtrack(1) ;
    }
    else {
        cout<<"Loi: khong thoa dieu kien 0<=k<=n "<<endl ;
    }
 
}
 
 
int main()
{
    cout<<"Nhan k va n: " ;
    cin>>k>>n ;
    toHop()  ;
    return 0;
}
