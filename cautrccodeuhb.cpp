#include <iostream>
using namespace std;

 struct Vector {
    double x;
    double y;
   
    
    void printVector(){
        cout << x << " " << y << endl;
    }
};

Vector addVector(Vector &v1, Vector v2)
{
    v1.x=v1.x+v2.x;
    v1.y=v1.y+v2.y;
   
    // Them code cua ban o day
}

int main()
{
   Vector v1, v2;
    cin>>v1.x>>v1.y>>v2.x>>v2.y;
    addVector( v1,  v2);
    v1.printVector();
    // Them code cua ban o day
}
