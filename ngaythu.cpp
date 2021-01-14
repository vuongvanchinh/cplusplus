//nhap ngày xuat thu
#include<iostream>
#include<string>
using namespace std;
struct today_and_future
{
	int d,m,y;
	char thu[20];
	get_date(int day, int month,int  year)
	{
		d=day;
		m=month;
		y=year;
		
	}
	bool test()
	{
		if((y%4==0 &&y%100!=0||y%400==0)&& m==2&&(d>0,d<=29)) return true;
		else
		{
			switch(m)
			{
				case 1:case 3:case 5:case 7: case 8:case 10:case 12:
						if(d>0&&d<=31) return true;
						else return false;
				case 4:case 6: case 9 :case 11:
					    if(d>0&&d<=30) return true;
						else return false;
				case 2:
				        if(d>0&&d<=28) return true;
						else return false;
		 		default: return false;
			}
		}
	}

	int deltaday()
	{
		int delta;
		if(day2.y>day.y)
		{
			if(day2.d<day.d)
			{
				deltal+=30+day2.d-day.d;
				day2.m--;
			}else deltal+=day2.d-day.d;
			if(day2.m<day.d)
			{
				
			}			
		}
		   delta+=((i%4==0 &&i%100!=0||i%400==0)? 366: 365);
		
		
	}
};
int main()
{
	char flag[20]="Tuesday";
	today_and_future day;
	today_and_future day2;
	day.get_date(11,12,2019);\
	int d, m, y;
	char a;
	cout<<"Nhap ngay thang can tra: "<<endl;
	cin>>d>>a>>m>>a>>y;
	day2.get_date(d,m,y);
//	cout<<day2.test()<<" ";
    


	

	
	
	
}
