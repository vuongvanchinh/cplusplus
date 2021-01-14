#include<iostream>
#include<cstring>
// in ra to hop chap k cua cac phan ru mang cho truoc 
using namespace std;
#define max 100
char a[100],MKT[100];
int n, k;
void sort_Out()
{
	int dem=1;
	for(int i=0; i<k-1; i++)
		for(int j=i+1;j<k ;j++)
		    if (a[i]==a[j])
		    	dem++;
	if(dem==1)
	{

		for(int i=0; i<k; i++)
			cout<<a[i]<<" ";
		cout<<endl;
    }
}
// Hàm de quy
//n la so phan tu cua mang ky tu
void Hehe(int i)
{
		for(int m=i;m<n-k+1+i; m++)
		{
			a[i]=MKT[m];
			if(i==k-1)sort_Out();
			else
			  Hehe(i+1);
		}
}
int main()
{
    cin>>MKT;
    n=strlen(MKT);
    cin>>k;
    bool mark[k];
    for(int i=0; i<k; i++)
    	mark[i]=false;
    Hehe(0);
	return 0;
}


