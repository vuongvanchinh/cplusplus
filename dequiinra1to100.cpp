#include<iostream>

using namespace std;
void inra(int n)
{
	if(n<1)
	{
		return ;
	}
	else  inra(n-1);
	cout<<n<<" ";
}
int main()
{
   //your code here
   inra(100);
   return 0;
}


