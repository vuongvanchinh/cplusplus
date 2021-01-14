#include <iostream>

using namespace std;

typedef struct sophuc{
    int thuc, ao;

};

sophuc tich(sophuc &a, sophuc &b)
{
    sophuc tich1;
    tich1.thuc=(a.thuc*b.thuc-b.ao*a.ao);
    tich1.ao=(a.thuc*b.ao+b.thuc*a.ao);
    cout<<tich1.thuc<<" "<<tich1.ao;
} 

int main() {
    sophuc a, b;
    cin>>a.thuc>>a.ao>>b.thuc>>b.ao;
    tich (a, b);
    // them code cua ban o day
}

