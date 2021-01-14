#include <iostream>			// De su dung cin cout
#include <fstream>			// De doc ghi file		
#include <cstdlib>			// De su dung cac thu vien cua he thong
#include <ctime>			// De dem thoi gian

#include <algorithm>		// De su dung cac thuat toan co ban
	
#include <vector>			// Cau truc du lieu vector
#include <string>			// Cau truc du lieu string

using namespace std;

int main() {
	// De do thoi gian
	clock_t thoigian_batdau = clock();
	
	//---------------------------------------------------------------
	string input_file = "day1.in"; 		// Ten file input
	int N;									// Do day day so
	vector<int> A;							// Day so
	
	//---------------------------------------------------------------
	// Mo file va doc du lieu
	ifstream fin(input_file.c_str());	
	fin >> N;
	A.assign(N, 0);				// Khoi tao day A co N phan tu, moi phan tu co gia tri = 0
	for (int i = 0; i < N; i++) fin >> A[i];	
	// Dong file
	fin.close();
	//---------------------------------------------------------------
	//==============do phuc tap cua thuat toan la O(n)===============
	
	int min=A[0], max=A[0];
	for (int i = 1; i < N; i++)
	{
		if(A[i]<min)
		{
			min=A[i];
		}
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	cout<<min+max<<"\n";
		clock_t thoigian_chayxong = clock();
	// CLOCKS_PER_SEC la thoi gian doi tu` dong ho cua chip sang giay
	double thoigian_chay = double(thoigian_chayxong - thoigian_batdau) / CLOCKS_PER_SEC;		
	cout << "Thoi gian chay: " << thoigian_chay << endl;
	return 0;
	/*N=10000:0.009s
		N=100000:0.083s
		N=1000000:0.087s
	*/
}
