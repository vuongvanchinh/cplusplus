#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
   
string S;
getline(std::cin, S);
string::iterator t, t2; // C�c bien lap
vector<string> split; // Mang c�c x�u (luu ket qua t�ch)
for (t=S.begin(); t<S.end();)
{
    //lap tu vi tri ban dau
    t2=find(t, S.end()," ");
    if (t!=t2) split.push_back(string(t, t2)); // Lay x�u k� tu giua 2 vi tr�
    t = t2+1; // Chuyen sang vi tr� sau
}
for (int i=split.size(); i>=0; i--)
cout << split[i] << endl; // In mang c�c x�u k� t?
getchar();

