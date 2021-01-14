#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void output(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<" ";
	}
	cout << endl;
}
//sap xep noi bot phan tu nho nhat len dau
void sapxepnoibot(int a[], int n)
{
	for (int i = 0; i < n -1; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j-1])
			{
				swap(&a[j], &a[j-1]);
			}
			output(a, 4);
		}
		
		
	}
}

void sapxepnoibot2(int a[], int n)
{
	for(int i=n-1; i>0; i--)
	{
		for(int j=0; j<i; j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j], &a[j+1]);
			}
			cout<<i<<"-"<<j<<
			"    : ";
			output(a, 4);
		}
	}
}
void sapxepluachon(int a[], int n)
{
	int pos;
	for(int i=0; i<n-1; i++)
	{
		pos=i;
		for(int j=i+1; j<n; j++)
		{
			if(a[j]<a[pos])
			{
				pos=j;
			}
		}
		swap(&a[pos], &a[i]);
		cout<<i<<" "<<pos+1<<"   :";
		output(a,n);
	}
}
int partion(int a[], int l, int flag)
{
	int p=a[flag];//phantucamcanh
	cout<<"p: "<<p<<"\n";
	int i=l-1;
	for(int j=l; j<flag; j++)
	{
		if(a[j]<p)
		{
			i++;
			swap(&a[j],&a[i]);
		}
	}
	swap(a[i+1],a[flag]);
	cout<<"i : "<<i<<"  : ";
	output(a,4);
	return i+1;
}
void qicksort(int a[], int l, int flag)
{
	if(l<flag)
	{
		int center=partion(a, l, flag);
		cout<<"center"<<center<<"\n";
		qicksort(a,l,center-1);
		qicksort(a,center+1, flag);
	}
}
int main()
{
	int a[4] = { 9,8,7,6};

	sapxepnoibot(a,4);
	//sapxepluachon(a,4);
	//qicksort(a,0,4-1);
	//output(a, 4);
}
