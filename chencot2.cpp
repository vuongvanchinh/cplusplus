#include<iostream>
using namespace std;
int main(){
	int hang, cot, vitrithem, phantuthem;
	cin>>hang>>cot;
	int mang[100][100];
	//nhap mang
	for(int i=0;i<hang; i++){
		for(int j=0; j<cot; j++){
			cin>>mang[i][j];
		}
	}
		cin>>vitrithem>>phantuthem;
	//chenmang
	cot++;
    for(int i=0; i<hang; i++){
    	for(int j=cot-1; j>=vitrithem; j--){
    		mang[i][j]=mang[i][j-1];
		}
			mang[i][vitrithem-1]=phantuthem;
	}
	//xuatmang
    for(int i=0;i<hang; i++){
    for(int j=0; j<cot; j++){
			cout<<mang[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
