#include<iostream>
#include<math.h>
int m=0;
int solve(int n, int m)
{
	int k= sqrt(n);
    if(n < 0) return 0;
    if(n == 0) return 1;

    int ans = 0;
    for (int i = m+1; i <= k; i++)
    ans += solve(n-i*i, i);
    return ans;
}
using namespace std;
int main()
{
    int n; 
    cin>>n;
    cout<<solve(n, 0);
}
