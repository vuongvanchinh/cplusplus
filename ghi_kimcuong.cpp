#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main(){
	int n;
	cin>>n;
	ofstream file("fileghi.txt");
	
	for(int x=n; x>=-n ; x--){
		for(int y=-n; y<=n; y++){
			file<<((abs(y) + abs(x) <=n )? "* " : ". ");
			
		}
		file<<endl;
		
	}
}
