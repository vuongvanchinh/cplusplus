#include<iostream>
#include<iomanip>
using namespace std;
int lamtron(double n)
{
    if(n-(int)n<0.25) n= (int)n;
    else if(n-(int)n>0.25&&n-(int)n<0.75) n= (int)n+0.5;
    else n=(int)n+1;
    return n;
}
int sapxepmang(float a[]){
    int tg;
    for(int i=0; i<9; i++){
        for(int j=i+1; j<10;j++){
            if(a[i]>a[j]){
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
}
int main(){
    int sobuoilythuyet, sobuoithuchanh=0;
    cin>>sobuoilythuyet;
    float a[10], tong=0;;
    for(int i=0; i<=9; i++){
        cin>>a[i];
        sobuoithuchanh+=(a[i]>0? 1: 0);
    }
    sapxepmang(a);
    float diemgk1 , diemgk2,CK, ST;
    cin>>diemgk1>>diemgk2>>CK>>ST;
    for(int i=5; i<=9; i++ )
        tong+=a[i];
    
    float TH=tong/5, GK=(diemgk1+diemgk2)/2;
    TH=lamtron(TH);
    GK=lamtron(GK);
   int CC= sobuoilythuyet+sobuoithuchanh;
   if(CC<20)cout<<"0.0";
   else
   if(0.2*TH+0.2*GK+0.6*(ST+CK)>10)cout<<"10.0";
      else cout<<setprecision(1)<<fixed<<(0.2*TH+0.2*GK+0.6*(ST+CK));
}
