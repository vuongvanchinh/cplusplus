// timc các b? nghi?m nguyên không âm c?a phuong trình ax1+bx2+cx3+dx4=e
#include<iostream>
#include<cmath>
using namespace std;


void out(int a[], int n = 4)
{
	for (int i = 0; i <= 4; i++)
	{
		cout << a[i]<<" ";
	}
	cout << endl;
}
int  dequi(int heso[], int sum, int n)
{
	int ketqua = 0;
	if (n == 1)
	{
		ketqua=sum / heso[1] + 1;
		return  ketqua;
		
	}
	int limit = abs(sum / heso[n]);

	for (int j = 0; j <= limit; j++)
	{
		ketqua+= 1 + dequi(heso, sum -j * heso[n], n - 1);
	}
	return ketqua;
}

int main()
{
	int heso[4] = { 1,1,1,0};
	int sum=1;
	int n = 3;
	cout << dequi(heso, sum, n-1);
	return 0;

}
