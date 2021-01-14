#include<iostream>

using namespace std;
void THAP_HA_NOI(int n,string NGUON,string DICH, string TG)
{
	if(n==1)
	{
		cout<<NGUON<<"------->"<<DICH<<endl;
		return ;
	}
	THAP_HA_NOI(n-1, NGUON,TG,DICH);
	THAP_HA_NOI(1, NGUON,DICH,TG);
	THAP_HA_NOI(n-1,TG,DICH,NGUON);
}
int main()
{
   //your code here
   string A="NGUON",B="DICH", C="TRUNG GIAN";
   int N;
   cin>> N;
   THAP_HA_NOI(N,A,B,C);
   
   return 0;
}


