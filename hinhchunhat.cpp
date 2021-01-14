#include <iostream>
using namespace std;

struct rectangle{
    int length,high;
    void dientich(){
        cout<<length*high;
    }
    void chuvi(){
        cout<<(length+high)*2<<" ";
    }
     
};


int main() {
    rectangle a;
    cin>>a.length>>a.high;
    a.chuvi();
    
    a.dientich();
    // them code cua ban o day
}
