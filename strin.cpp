#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;
int main()
{
	char a[20];
	gets(a);
	int l= strlen(a);
	for(int i=0; i<l; i++){
		int  dem=1;
		for(int j=i+1; j<l; j++)
		{
			while(a[i]==a[j])
			{
				dem++;
				for(int k=j; k<l-1; k++)
				{
					a[k]=a[k+1];
					a[l-1]='\0';
					l--;
				}
			}
		}
		cout<<a[i]<<" "<<dem<<endl;
	}
}
