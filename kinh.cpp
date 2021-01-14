#include <iostream>
using namespace std;

struct date{
    int day,month,year;
    void nhapdulieu (){
        char a;
        cin>>day>>a>>month>>a>>year;
     
    }
   void thenextday(){
   	 char a='/';
       if(year%4==0&&year%100!=0||year%400==0)
        {
         switch(month){
             case 1:
             case 3:
             case 5:
             case 7:
             case 8:
             case 10:
             case 12:
             {
                 if(day>00&&day<31)cout<<day+1<<a<<month<<a<<year;
                 else
                 if(day==31&&month!=12)cout<<"01/"<<month+1<<year;
                 else cout<<"01/01/"<<year+1;
                 if(day>31)cout<<"INVALID";
             }
             case 2:
             {
                 if(day==29)cout<<"01/03/"<<year;
                 else cout<<day+1<<"02"<<year;
                 if(day>29)cout<<"INVALID";
             }
             case 4:
             case 6:
             case 9: 
             case 11:
            {
                 if(day>00&&day<30)cout<<day+1<<a<<month<<a<<year;
                 else
                 if(day==30)cout<<"01/"<<month+1<<year;
                 else cout<<"INVALID";
             }
            }
         }
         else{
         	 switch(month){
             case 1:
             case 3:
             case 5:
             case 7:
             case 8:
             case 10:
             case 12:
             {
                 if(day>00&&day<31)cout<<day+1<<a<<month<<a<<year;
                 else
                 if(day==31&&month!=12)cout<<"01/"<<month+1<<year;
                 else cout<<"01/01/"<<year+1;
                 if(day>31)cout<<"INVALID";
             }
             case 2:
             {
            
                 if(day==28)cout<<"01/03/"<<year;
                 else cout<<day+1<<"02"<<year;
                 if(day>28)cout<<"INVALID";
                 else cout<<day+1<<a<<"02"<<a<<year;
             }
             case 4:
             case 6:
             case 9: 
             case 11:
            {
                 if(day>00&&day<30)cout<<day+1<<a<<month<<a<<year;
                 else
                 if(day==30)cout<<"01/"<<month+1<<year;
                 else cout<<"INVALID";
             }
            }
         }
         	
		 }
};

int main() {
	date a;
	a.nhapdulieu();
	a.thenextday();
    // them code cua ban o day
}

