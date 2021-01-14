#include<iostream>
#include<cmath>
using namespace std;
int ucln(int a, int b)
{
    int n=abs(a), m=abs(n);
    while(n!=m)
    {
        n=(n>m ? n-m : n );
        m=(m>n ? m-n: m );
    }
       return n;
       	  
}
int main()
{
    int a, b, bcnn;
    
    cout<<ucln(8, 6);
    
    
}
