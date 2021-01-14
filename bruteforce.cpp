#include<iostream>
//Thu?t toán d?i sánh m?u Brute Force
#include<cstring>

using namespace std;
int brute_force(const char*a , const char* x, int la, int lx)
{
	int count=0;
	for(int i=0; i<=(la-lx);i++)
	{
		for(int j=0; j < lx && x[j]==a[i+j]; j++)
		{
			if(j==lx-1) count++;
		}
	}
	return count;
}

int main()
{
   //your code here
   const char  *a="vuong van chinh xin chao cac xin chao ban ban";
   const char  *x="xin chao";
   int la= strlen(a);
   int lx= strlen(x);
   cout<<la<<" "<<lx<<"\n";
   int count=brute_force(a,x,la,lx);
   cout<<count<<" hihi";
   return 0;
}


