#include<iostream>
#include<cstring>

using namespace std;
char M[100], a[100];
int n, k;
int pos(int po)
{
	if(po==-1) return -1;
	for (int i=0; i<n; i++)
	   if(a[po]==M[i]) return i;
	return -1;
}
void sort_out()
{

	for(int i=0; i<k; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
//hamdequi
void tohop(int i)
{
	for(int m=pos(i-1)+1; m<n-k+i+1; m++)
	{
		a[i]=M[m];
		if(i==k-1)sort_out();
		else tohop(i+1);
	}
}
int main()
{
	cout<<"nhap mang ki tu: ";
    cin>>M;
	n=strlen(M);
	//sapxep chuoi M
	/*char temp;
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(M[i]>M[j])
			{
				temp=M[i];
				M[i]=M[j];
				M[j]=temp;
			}	*/
	cout<<"NHap K: ";
	cin>>k;
	tohop(0);
   return 0;
}


