#include <iostream>
#include<cmath>
using namespace std;
bool kt(long n)
{
   if(n<2) return false;
  long   k=sqrt(n) ,m;
  for(m=2; m<=k; m++)
      if(n %m==0)return false;
  return true;
}
  
int main()
{
  long n;
  cin>>n;
  for(long i=0; i<=n; i++)
  {
  	if(kt(i)==1) cout<<i<<" ";
  }
  return 0;
  
}
