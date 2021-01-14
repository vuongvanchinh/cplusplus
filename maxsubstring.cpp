#include<iostream>
#include<string>

using namespace std;
string maxsubstr(string a, string b)// do dai a lon hown dai b
{
    int start=0, numchar=1;
    int la=a.size(), lb=b.size();
    int i=0, num=1;
    for(int i=0; i<la-numchar; i++)
    {
        for(num=0; num<lb; num++)
        {
            if(a[i+num]!=b[num]) break;

        }
        if(num+1>numchar)
        {
            start=i;
            numchar=num+1;
        }
    }
    return a.substr(start, numchar);

}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<maxsubstr(a,b);

    return 0;
}
