#include<iostream>
#include<vector>
using namespace std;
int StoN(string s)
{
	int total = 0;
	int r = 0;
	for (int i = 0; i < s.size(); i++)
	{
		r = int(s[i] - 48);
		total = total * 10 + r;
	}
	return total;
}
int main()
{
	int k=0;
	string s[2] = { "" };
	string p;
	cin >> p;
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] == '+') k++;
		else s[k] += p[i];
	}
	for (int i = 0; i < 2; i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;
	cout << StoN(s[0])+StoN(s[1]);
}
