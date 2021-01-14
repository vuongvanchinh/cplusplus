#include <iostream>

using namespace std;
void inra(int a)
{
    if(a<10) cout<<"0"<<a;
    else cout<<a;
}

struct Time
{
    int hour, minute, second;
   void nhap()
    {
       cin>>hour>>minute>>second;//your code here
    }
   
};
 void getTimeDifference(Time &time2, Time time1)
    {
        Time temp01;
        if(time2.second<time1.second)
        {
            temp01.second=60+time2.second-time1.second;
             time2.minute--;
        }
        else
        {
            temp01.second=time2.second-time1.second;
        }
        //phut
        if(time2.minute<time1.minute)
        {
            temp01.minute=60+time2.minute-time1.minute;
            time2.hour--;
        }
        else
        {
            temp01.minute=time2.minute-time1.minute;
        } 
        //hour
            temp01.hour=time2.hour-time1.hour;
         inra( temp01.hour);
         cout<<":";
         inra( temp01.minute);
         cout<<":";
         inra(temp01.second);
    }

int main()
{
   Time time1, time2;
    time1.nhap();
    time2.nhap();
   getTimeDifference(time2, time1);
    return 0;
}

