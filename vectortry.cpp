#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
   
string S;
getline(std::cin, S);
string::iterator t, t2; // Các bien lap
vector<string> split; // Mang các xâu (luu ket qua tách)
for (t=S.begin(); t<S.end();)
{
    //lap tu vi tri ban dau
    t2=find(t, S.end()," ");
    if (t!=t2) split.push_back(string(t, t2)); // Lay xâu ký tu giua 2 vi trí
    t = t2+1; // Chuyen sang vi trí sau
}
for (int i=split.size(); i>=0; i--)
cout << split[i] << endl; // In mang các xâu ký t?
getchar();

