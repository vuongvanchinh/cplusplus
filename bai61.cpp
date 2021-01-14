#include <iostream>			// De su dung cin cout
#include <fstream>			// De doc ghi file		
#include <cstdlib>			// De su dung cac thu vien cua he thong
#include <ctime>			// De dem thoi gian

#include <algorithm>		// De su dung cac thuat toan co ban
	
#include <vector>			// Cau truc du lieu vector
#include <string>			// Cau truc du lieu string

//b,====do phuc tap cua thuat toan sap xep chen:O(nlogn)
using namespace std;
void doi_cho(int &a, int &b)
{
	int k=a;
	a=b;
	b=k;
}
int main()
{
   //your code here
   
   string input_file = "day1.in"; 		// Ten file input
	int N;								// Do day day so
	vector<int> A;							// Day so
	
   // Mo file va doc du lieu
	ifstream fin(input_file.c_str());	
	fin >> N;
	A.assign(N, 0);				// Khoi tao day A co N phan tu, moi phan tu co gia tri = 0
	for (int i = 0; i < N; i++) fin >> A[i];	
	// Dong file
	fin.close();
	//---------------------------------------------------------------
	for(int i=0; i<N; i++)
	{
		for(int j=i; j>=1; j--)
		{
			if(A[j]<A[j-1])
			{
				doi_cho(A[j], A[j-1]);
			}
			else break;
		}
	}
	for(int i=0; i<N; i++)
	{
		cout<<A[i]<<" ";
	}
   
   return 0;
}


