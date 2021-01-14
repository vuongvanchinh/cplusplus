#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector <string> NUM;
vector <int> a;//65432101

void docbaso(int tram,int chuc, int donvi)
{
	
}
void inra()
{
	int l=a.size();
	switch(l)
	{
		case 1: { cout<<NUM[a[0]]; break;}
		case 2: { 
			if(a[1]*10+a[0] <= 20) cout<<NUM[a[1]*10+a[0]];
			else cout<<NUM[a[1]+18]<<NUM[a[0]];
		}
		case 3:{
			cout<<NUM[a[2]]<<" hundred "; 
			if(a[1]*10+a[0] <= 20) cout<<NUM[a[1]*10+a[0]];
			else cout<<NUM[a[1]+18]<<NUM[a[0]];
			break;
		}
		case 4:{
			cout<<NUM[a[3]]<<" thousand";
			if(a[2] !=0) cout<<NUM[a[2]]<<" hundred "; 
			if(a[1]*10+a[0] <= 20) cout<<NUM[a[1]*10+a[0]];
			else cout<<NUM[a[1]+18]<<NUM[a[0]];
			break;
		}
		case 5:{
			if(a[4]*10+a[3] <= 20) cout<<NUM[a[4]*10+a[3]]<<"thousand";
			else cout<<NUM[a[4]+18]<<NUM[a[3]]<<"thousand";
			if (a[2] !=0 )cout<<NUM[a[2]]<<" hundred "; 
			if(a[1]*10+a[0] <= 20) cout<<NUM[a[1]*10+a[0]];
			else cout<<NUM[a[1]+18]<<NUM[a[0]];
			break;
		}
		case 6:{
			if (a[5] !=0 )cout<<NUM[a[5]]<<" hundred "; 
			if(a[4]*10+a[3] <= 20) cout<<NUM[a[4]*10+a[3]]<<"thousand";
			else cout<<NUM[a[4]+18]<<NUM[a[3]]<<"thousand";
			//basocuoi
			if (a[2] !=0 )cout<<NUM[a[2]]<<" hundred "; 
			if(a[1]*10+a[0] <= 20) cout<<NUM[a[1]*10+a[0]];
			else cout<<NUM[a[1]+18]<<NUM[a[0]];
			break;
		}
		case 7:{
			cout<<NUM[a[6]]<<" milion";
			if(a[5] !=0) cout<<NUM[a[5]]<<" hundred "; 
			if(a[4]*10+a[3] <= 20) cout<<NUM[a[4]*10+a[3]]<<"thousand";
			else cout<<NUM[a[4]+18]<<NUM[a[3]]<<"thousand";
			//basocuoi
			if (a[2] !=0 )cout<<NUM[a[2]]<<" hundred "; 
			if(a[1]*10+a[0] <= 20) cout<<NUM[a[1]*10+a[0]];
			else cout<<NUM[a[1]+18]<<NUM[a[0]];
			break;
		}
		case 8:{
			if(a[7]*10+a[6] <= 20) cout<<NUM[a[7]*10+a[6]]<<"milion";
			else cout<<NUM[a[7]+18]<<NUM[a[6]]<<"milion";
			if(a[5] !=0) cout<<NUM[a[5]]<<"hundred "; 
			if(a[4]*10+a[3] <= 20) cout<<NUM[a[4]*10+a[3]]<<"thousand";
			else cout<<NUM[a[4]+18]<<NUM[a[3]]<<"thousand";
			//basocuoi
			if (a[2] !=0 )cout<<NUM[a[2]]<<" hundred "; 
			if(a[1]*10+a[0] <= 20) cout<<NUM[a[1]*10+a[0]];
			else cout<<NUM[a[1]+18]<<NUM[a[0]];
			break;
		}
		case 9:{
			if (a[8] !=0 )cout<<NUM[a[8]]<<" hundred "; 
			if(a[7]*10+a[6] <= 20) cout<<NUM[a[7]*10+a[6]]<<"milion";
			else cout<<NUM[a[7]+18]<<NUM[a[6]]<<"milion";
			//sausocoi
			if(a[5] !=0) cout<<NUM[a[5]]<<"hundred "; 
			if(a[4]*10+a[3] <= 20) cout<<NUM[a[4]*10+a[3]]<<"thousand";
			else cout<<NUM[a[4]+18]<<NUM[a[3]]<<"thousand";
			
			if (a[2] !=0 )cout<<NUM[a[2]]<<" hundred "; 
			if(a[1]*10+a[0] <= 20) cout<<NUM[a[1]*10+a[0]];
			else cout<<NUM[a[1]+18]<<NUM[a[0]];
			break;
		}
				             
			
		
	}
}
int main()
{
   //khoi tao mang;
    NUM.push_back("\0"); NUM.push_back("one "); NUM.push_back("two");
	NUM.push_back("three"); NUM.push_back("four"); NUM.push_back("five");
	NUM.push_back("six "); NUM.push_back("seven "); NUM.push_back("eight ");
	NUM.push_back("nine "); NUM.push_back("ten "); NUM.push_back("eleven ");
	NUM.push_back("twelve "); NUM.push_back("thirteen "); NUM.push_back("forteen ");
	NUM.push_back("fifteen "); NUM.push_back("sixteen "); NUM.push_back("seventeen ");
	NUM.push_back("eighteen "); NUM.push_back("nineteen "); NUM.push_back("twenty ");
	NUM.push_back("thirty "); NUM.push_back("forty "); NUM.push_back("fifty ");	
	NUM.push_back("sixty "); NUM.push_back("seventy "); NUM.push_back("eighty ");
	NUM.push_back("ninety");//3-21 4-22
	
	int n,l=0,t;
	
	cin>>n;
	t=abs(n);
	while(t!=0)
	{
		a.push_back(t%10);
		t/=10;
	}
	 inra(); 
	 /*
   cout<<NUM[0]<<" "<<NUM[1]<<"\n";
   
   for(int i=0; i<l; i++)
   {
   	cout<<a[i];
   	
   }*/
   return 0;
}


