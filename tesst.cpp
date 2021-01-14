#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void change(int* &a)
{
	*a=0;
}
void chage2(int* &a)
{
	change(a);
}
int main()
{
	int *n; 
	cin >> *n; 
	chage2(n);
	cout<<*n;
	/*vector<int>a;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int index = 0;
	while (index < a.size())
	{
		if (a[index] % 2 == 0)
		{
			a.erase(a.begin() + index);
		}
		else
		{
			index++;
		}
	}
	sort(a.begin(), a.begin());
	if (a.size() == 0) cout << "Day khong co so le.";
	else if (a.size() == 1) cout << "Day co mot so le la: " << a[0] << ".";
	else
	{
		cout << "Hai so le lon nhat la: " << a[a.size() - 1] << " va " << a[a.size() - 2] << ".";
	}
*/
	return 0;
}
