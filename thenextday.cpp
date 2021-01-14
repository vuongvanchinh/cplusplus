#include <iostream>
using namespace std;
bool namnhuan(int k)
{
    if(k%4==0&&k%100!=0||k%400==0)
    return true;
    return false;
}
void inra(int n)
{
    if(n<10)cout<<"0"<<n;
    else cout<<n;
}
struct date{
    int day,month,year;
   void nhap()
   {
   	char a;
       cin>>day>>a >>month>>a>>year;
   }
    date getNextDay(){
        if(namnhuan(year)&&month==2)
        {
        	if(day>29)cout<<"INVALID";
        else{
          if(day<29)
          {
              day++;
          }
          else
           {
           	day=1;
           	month=3;
		   }
		            inra(day);
                     cout<<"/";
                     inra (month);
                     cout<<"/";
                     inra(year);
        }}
        else
        {
            switch(month)
            {
                case 1: case 3:case 5:case 7:case 8:case 10:case 12:{
				if(day>31)cout<<"INVALID";
				else{
				
                if(day<31)
                {
                    day++;
                }
                else{ 
				day=1;
                month++;
                if(month>12){
                    month=1;
                    year++;  
                }}
              inra(day);
              cout<<"/";
              inra (month);
              cout<<"/";
              inra(year);}
              break;
                }
                
            case 2:{
            	if(day>29)cout<<"INVALID";
            	else{
               if(day<28)
                {
                   day ++;
                }
                
                else {
                	
                    day=1;
                    month=3;
                    
                }
                inra(day);
                     cout<<"/";
                     inra (month);
                     cout<<"/";
                     inra(year);
                 }
                     break;}
                     
                 case 4:case 6:case 9:case 11:
                 	{
					 if(day>30)cout<<"INVALID";
					 else
					 {
                    if(day<30)
                {
                   day++;
                }
                else {
                    day=1;
                    month++;
                }
                inra(day);
                     cout<<"/";
                     inra (month);
                     cout<<"/";
                     inra(year);
                 }
                     break;
            }
			}
        }
        // them code cua ban o day
    }    
};

int main() {
    // them code cua ban o day
    date a, b;
    a.nhap();
    a.getNextDay();
     return 0;
}

