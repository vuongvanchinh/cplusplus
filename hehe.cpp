#include<iostream>
#include<vector>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string S = "Xin chao tat ca cac ban"; // Kh?i t?o gi� tr? c?a x�u
    string::iterator t, t2; // C�c bi?n l?p
    vector<string> split; // M?ng c�c x�u (luu k?t qu? t�ch)
    cout<<(*t);
     for (t=S.begin(); t<S.end();)
     {
     	 cout<<(*t);
        // L?p t? v? tr� b?t d?u
        t2=find(t, S.end(), ' '); // T�m k� t? space ' ' d?u ti�n
         // k? t? v? tr� t
        if (t!=t2) split.push_back(string(t, t2)); // L?y x�u k� t? gi?a 2 v? tr�
         t = t2+1; // Chuy?n sang v? tr� sau
      }     
     for (int i=split.size()-1; i>=0; i--)
     cout << split[i] << endl; // In m?ng c�c x�u k� t?
getchar();
}
   
