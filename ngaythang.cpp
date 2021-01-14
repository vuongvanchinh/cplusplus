#include<iostream>
#include<stdio.h>
using namespace std;
//kiemtrAnawmnhuan
bool nam_nhuan (int y )
{
	if(y % 4==0 && y % 100!= 0 || y % 400 ==0 )return true;
	return false;
}
struct date 
{
	int d , m , y;
	//nhap ngay thang
	date input()
	{
		char a;
		cin>>d ;
	//	fflush(stdin);
		cin>>a;
	//	fflush(stdin);
		cin>>m ;
	//	fflush(stdin);
		cin>>a; 
	//	fflush(stdin);
		cin>>y;
	}
	//xuat ngay thang
	date xuat()
	{
		if(d<10&&d>0) cout<<"0"<<d <<"/";
		else cout<<d<<"/";
		if(m<10&&d>0) cout<<"0"<<m <<"/";
		else cout<<m <<"/";
		cout<<y;
	}
	date getnextday()
	{
		//nam nhuan thang 2
		if(nam_nhuan(y)==1 && m==2)
		{
			if(d >0 && d <29)
			{
				d ++;
				xuat();
			}
			else
			{
			   if(d ==29)
			   {
			   	d =1;
			   	m ++;
			   	xuat();
			   }
			   else cout<<"INVALID";
		    }
		}
		else
		{
			switch(m)
			{
				//CAC THANG 31 NGAY
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
			//	case 12:
				    {
					    if(d >0&& d <31)
			             {
			               	d ++;
		               	}
			            else 
			               if(d==31)
			                {
			                    	d =1;
			                     	m ++;
			                     	xuat();
			                }
			               else cout<<"INVALID";
			               break;
					}
					//thang 12
					case 12:
					      {
					        if(d >0&& d <31)
			                 {
			               	   d ++;
			               	   xuat();
		                    }
			                else 
			                    if(d==31)
			                    {
			                    	d =1;
			                     	m =1;
			                     	y++ ;
			                     	xuat();
			                    }
			                    else cout<<"INVALID";
			                    break;
					       }
					       /// CAC THANG 30 NGAY
					       case 4:
					       case 6:
					       case 9:
					       case 11:
					       	   {
					               if(d >0&& d <30)
			                          {  
			               	             d ++;
			               	             xuat();
		                            	}
			                         else 
			                            if(d==30)
			                            {
			                    	       d =1;
			                     	       m ++;
			                     	       xuat();
			                            }
			                            else cout<<"INVALID";
			                            break;
					            }
					        case 2:
					            {
					            	if(d> 0 && d< 28)
					            	  {
					            	  	d++;
					            	  	xuat();
									  }
									else
									{
									
									   if(d==28)
									   {
									   	d =1;
									   	m++;
									   	xuat();
									   }
									   else cout<<"INVALID";
									}  
									break;
								}	
                            default :cout<<"INVALID";			       		
			}
					       
									      	
		}	
				
	}
		
};
int main()
{
	date d ;
	d .input();
   //cout<<d.m;
   d .getnextday();
  // d .xuat();
}
