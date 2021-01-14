#include<iostream>
#include<fstream>

using namespace std;

int main()
{
   string output_file = "search.in";
	
	// Mo file day1.in de ghi ket qua
	ofstream fout(output_file.c_str());
	fout << 5 <<" "<<1<<"\n";
	for (int i = 1; i <6; i++) 
		if (i < 6-1) {
			fout <<i <<" ";
		}
		else {
			fout <<i;
		}
	fout.close();	// Dong file
   
   return 0;
}


