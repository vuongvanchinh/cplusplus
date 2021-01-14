#include<iostream>
#include<vector>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string S = "Xin chao tat ca cac ban"; // Kh?i t?o giá tr? c?a xâu
    string::iterator t, t2; // Các bi?n l?p
    vector<string> split; // M?ng các xâu (luu k?t qu? tách)
    cout<<(*t);
     for (t=S.begin(); t<S.end();)
     {
     	 cout<<(*t);
        // L?p t? v? trí b?t d?u
        t2=find(t, S.end(), ' '); // TÌm ký t? space ' ' d?u tiên
         // k? t? v? trí t
        if (t!=t2) split.push_back(string(t, t2)); // L?y xâu ký t? gi?a 2 v? trí
         t = t2+1; // Chuy?n sang v? trí sau
      }     
     for (int i=split.size()-1; i>=0; i--)
     cout << split[i] << endl; // In m?ng các xâu ký t?
getchar();
}
   
