#include<iostream>
#include<cstring>

using namespace std;
char KT[100];

char a[100];
int n, k;
//ham tim vitri a[i] trong xâu KT
int pos(int i)
{
	if (i==-1)return -1;
	for(int m=0; m<n; m++)
	{
		if(a[i]==KT[m])return m;
	}
}
//hamm xuat ra man hinh
void out()
{
	for(int i=0; i<k; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
//ham de qui
void Try(int i)
{
	for(int l=pos(i-1)+1; l<n-k+1+i; l++)
	{
		a[i]=KT[l];
		if(i==k-1)out();
		else Try(i+1);
	}
}
//sapxep
void sort()
{
	char temp;
	for(int i=0; i<n-1; i++)
		for(int j=i+1;j<n; j++)
			if(KT[i]>KT[j])
			{
				temp=KT[i];
				KT[i]=KT[j];
				KT[j]=temp;
			}
}

int main()
{
   //your code here
   cin>>KT;
   n=strlen(KT);
   sort();
   cin>>k;
   Try(0 );
   return 0;
}


