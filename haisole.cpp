#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;
void timhaisolelonnhat()
{
	
	int n; 
	cin >> n; 
	int a[100];


	vector<int>le;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			le.push_back(a[i]);
		}
	}
	
	
	sort(le.begin(), le.end());
	
	if (le.size() == 0) cout << "Day khong co so le.";
	else if (le.size() == 1) cout << "Day co mot so le la: " << le[0] << ".";
	else
	{
		cout << "Hai so le lon nhat la: " << le[le.size() - 1] << " va " << le[le.size() - 2] << ".";
	}

}

char* shorten(const char* s)
{
	char *kq=NULL;
	 int l=strlen(s);
	 if(l<11) kq=s;
	 else
	 {
	 	strcpy(kq,(*s+0));
	 	strcat(kq,to_string(l-2));
	 	strcat(kq, *(s+l-1));
	 }
	return kq;
}
int main()
{
	
	char s[100];
	cin>>s;
	
	cout<<shorten(s);
	return 0;
}
