#include<iostream>
using namespace std;
struct Rectangle {
    
    // your code goes here
    // Cac bien thanh vien
     int height, length;
    
    // Hai ham khoi tao mac dinh
    Rectangle ()
    {
         height=0, 
         length=0;
    }
    //ham khoi tao
    Rectangle (int a, int b)
    {
          height=a;
		  length=b;
    }
    int getPerimeter() {
        return (height+length)*2;
    }
    
    void print() {
        for(int y=0; y<height; y++)
        {
            for(int x=0; x<length; x++)
            {
                if(y==0||y==height-1||x==0||x==length-1)cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
        // your code goes here
    }
};
int compare(Rectangle a, Rectangle b) {
    if(a.getPerimeter()==b.getPerimeter())return 0;
    if(a.getPerimeter()<b.getPerimeter())return -1;
    return 1;
    // your code goes here
}
int main()
{
	Rectangle a(3, 4);
	cout<<a.getPerimeter()<<endl;
	a.print();
	
}
