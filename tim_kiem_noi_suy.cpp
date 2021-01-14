#include<iostream>

using namespace std;
int a[10]={1,2,3,4,5,6,7,8,9,10};
int low=0, high=9, mid=-1;
int find(int data)
{
	mid=low+((high-low)/(a[high]-a[low])*(data-a[low]));
	int x=a[mid];
	int i=-1;
	while(low<=high)
	{
		if(x==data)
		{
			i=mid;
			break;
		}
		else
		{
			if(x>data)
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
		
	}
	return i;
}
int main()
{
   //your code here
   cout<<find(3);
   
   return 0;
}


