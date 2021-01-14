//date and time 
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
   //your code here
   time_t now = time(0);
   cout<<now<<endl;
   //lay dinh dang ngay thang c1
   char *ch =ctime(&now);
  /* cout<<ch<<endl;
   //lay dinh dang time c2
   tm *a=localtime(&now);
   char *ch2=asctime(a);
   cout<<ch2<<endl;*/
   //tu dinh dang time
   tm *a=localtime(&now);
   cout<<"ngay/thang/nam gio:phut:giay: "<<endl;
   
   cout<<a->tm_mday<<"/"<<a->tm_mon+1<<"/"<<a->tm_year+1900<<" ";
   cout<<a->tm_hour<<":"<<a->tm_min<<":"<<a->tm_sec<<endl;
   return 0;
}


