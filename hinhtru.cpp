#include <iostream>
using namespace std;

struct cylinder{
    int radius,high;
    
    double getSurfaceArea(){
        // them code cua ban o day
        return 2*3.14*radius*high+2*radius*radius*3.14;
    }
    double getVolume(){
        return radius*radius*3.14*high;
        // them code cua ban o day
    }
};

int main() {
    cylinder a;
    cin>>a.radius>>a.high;
    cout<<a.getSurfaceArea()<<" "<<a.getVolume();
    // them code cua ban o day
}
nnn
