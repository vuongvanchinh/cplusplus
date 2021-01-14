#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define traimin-1
int m;
int n;
int baimin[50][50];
int gomin[50][50];

using namespace std;
void khoitaosoluongmin(int somin)
{
	//baimin[0][0]=traimin;
	int i; int j;
	int dem=0;
     do
	 {
	 	//taoo so random tu (0, n-1)
	 	i=rand()% n;
	 	j=rand()% m;
	 	if(baimin[i][j]==0)
	 	{
	 		baimin[i][j]=traimin;
	 		dem++;
		 }
	}
	while(dem != somin);	
}
void khoitaobaimin()
{
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
		{
			baimin[i][j]==0;
			cout<<"* ";
			gomin[i][j]=0;//all cac o chuua mo
		}
		cout<<"\n";
	}
}
void demsomin()
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(baimin[i][j]!=traimin)
			{
				int dem=0;
				if(j > 0 && baimin[i][j-1]  == traimin)
				   dem++;
                if(i < m-1  &&  j > 0  &&  baimin[i+1][j-1] == traimin)
				   dem++;
                if(i < m-1   &&  baimin[i+1][j] == traimin)
				   dem++;
				if(i < m-1  &&  j <n-1  &&  baimin[i+1][j+1] == traimin)
				   dem++;
				if( j <n-1  &&  baimin[i][j+1] == traimin)
				   dem++;
				if(i >0 &&  j < n-1  &&  baimin[i-1][j+1] == traimin)
				   dem++;
				if(i > 0   &&  baimin[i-1][j-1] == traimin)
				   dem++;
				if(i > 0  &&  j > 0  &&  baimin[-1][j-1] == traimin)
				   dem++;
				baimin[i][j]=dem;
			}
		}
	}
}
void capnhatbaimin()
{
     int i, j;
     for(i=0; i<m; i++)
     {
	      for(j=0; j<n; j++)
	      {
	      	if(baimin[i][j]==traimin)
			  {
	        	cout<<"* ";
			  }
	      	else if (baimin[i][j]==0)
			      {
	         	    cout<<". ";
				  }
	      else
		      cout<<baimin[i][j]<<" ";	
		  }
		  cout<<"\n";
	 }
}
void vebaimin(int x, int y)
{
	int i, j;
	gomin[x][y]=1;
	for (i=0; i<m; i++)
	{
		for(j=0; j<n ; j++)
		{
			if(gomin[i][j]==1)
			{
			    if(baimin[i][j]==0)
			    {
			
		         cout<<'. ';
			    }
		         else
		            cout<<baimin[i][j]<<" ";
			}
			else
			  cout<<"* ";
		}
		cout<<"\n";
	}
}
int main()
{
	int dong, cot, somin;
	int sizemap;
	cout<<"\nNhap kich thuoc bai min: ";
	cin>>sizemap;
	m=n=sizemap;
	khoitaobaimin();
	cout<<"\nNhap so luong trai min ban muon choi: ";
	do
	{
		cin>>somin;
		if(somin>=n*m)
		    cout<<"\nKhong hop le Yeu cau nhap lai: ";
	}
	while(somin>=n*m);
	khoitaosoluongmin(somin);
	demsomin();
	while(1)
	{
		cout<<"\nGo toa do o ban chon (VD 1  2): ";
		cin>>dong>>cot;
		if(baimin[dong][cot]==traimin)
		{
			capnhatbaimin();
			break;
		}
		vebaimin(dong, cot);
	}
	getch();
}
