#pragma once


void nhapmang1(float *a)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>*(a+i*n+j);//a[i][j]
		}
	}
}
void xuatmang1(float *a)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<*(a+i*n+j)<<" ";//a[i][j]
		}
		cout<<endl;
	}
}
void nhapmang2(float **a)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>*(*(a+i)+j);//a[i][j]
		}
	}
}
void xuatmang2(float **a)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<*(*(a+i)+j)<<" ";//a[i][j]
		}
		cout<<endl;
	}
}




