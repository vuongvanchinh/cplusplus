#include <iostream>
#include<math.h>
using namespace std;
int ucln(int tuso, int mauso);
typedef struct phanso{
    int tuso, mauso;

};

phanso add(phanso &a, phanso &b)
{
    phanso sum;
    sum.tuso=(a.tuso*b.mauso+b.tuso*a.mauso);
    sum.mauso=(a.mauso*b.mauso);
    cout<<sum.tuso/ucln(sum.tuso,sum.mauso)<<"/"<<sum.mauso/ucln(sum.tuso,sum.mauso);
} 

int main() {
    phanso a, b;
    cin>>a.tuso>>a.mauso>>b.tuso>>b.mauso;
   add(a, b);
    // them code cua ban o day
}
int ucln(int tuso , int  mauso)
{
    int a=abs(tuso);
    int b=abs(mauso);
    while(a!=b)
    {
        if(a>b)a=a-b;
        else b=b-a;
    }
    return a;
}
