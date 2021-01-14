#include <iostream>
#include<cmath>
using namespace std;
const double pi=3.14;
struct cylinder{
    int radius,high;
    cylinder (int _radius, int _high)
	{
		radius=_radius;
		high=_high;
	}
    double getSurfaceArea(){
        return 2*pi*radius*high+2*pi*radius*radius;
    }
    double getVolume(){
       return pi*pow (radius,3)*high;
    }
};

int main() {
    int a,b;
 //   cin>>a>>b;
   
    cylinder get[10];
    
    double x,y;
    for(int i=0; i<2; i++)
    {  
    
        cin>>x>>y;
	
        get[i].cylinder(x, y);
        
    }
   // x=get.getSurfaceArea();
   // y=get.getVolfume();
    cout<<x<<" "<<y;
    return 0;
}
