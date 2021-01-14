#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void xuat(double a)
{
	cout<<setprecision(5)<<fixed<<a<<" ";
}
int main()
{
	double a, b, c;
	cin>>a>>b>>c;
	//th a=0;
	if (a==0)
	{
		//b=0
		if(b==0)
		{
			//c=0
			if(c==0)
			{
				cout<<"phuong trinh co vo so nghiem"<<endl;    
			}
			// neu c khac 0
			else cout<<"phuong trinh vo nghiem";
		}// neu b khac 0
		else
		{
			// neu b c cung dau
			if(b*c>0)cout<<"phuong trinh vo nghiem";
			else
			{ 
			// neu b khac 0 c=0
			   if(b*c==0)cout<<"phuong trinh co 1 nghiem"<<endl
			                 <<"0.00000";
			    else
			    {
			    	cout<<"phuong trinh co 2 nghiem"<<endl;
			    	xuat(-sqrt(-c/b));
			    	xuat(sqrt(-c/b));
				}
		    }
		}
	}
	else
	{
	   double delta=sqrt(b*b-4*a*c);
	   //neu pt cos nghiem x binh
       if(delta>0)
       {
       	    //neu tich cac nghiem >0
       	   if(a*c>0)
       	    {
       	    	//neu tong cac nghiem duong
       	 	    if(a*b<0)
       	 	    {
       	 	    	///in ra nghiem tu nho den lon
       	 	    	cout<<"phuong trinh co 4 nghiem"<<endl;
       	 	    	xuat(-sqrt((-b+sqrt(delta))/(2*a)));
       	 	    	xuat(-sqrt((-b-sqrt(delta))/(2*a)));
       	 	    	xuat( sqrt((-b-sqrt(delta))/(2*a)));
       	 	    	xuat( sqrt((-b+sqrt(delta))/(2*a)));
				}
				else
				{
					//neu tog cac nghiem am
					if(a*b>0)
					{
						cout<<"phuong trinh vo  nghiem"<<endl;
					}
				}
			}
			//neu tich cac nghiem khong >0
			else
			{
			   //	neu tic cac nghiem =0
				if(a*c==0)
				{
					//tong cac nghim duong
					if(a*b<0)
					{
						cout<<"phuong trinh co 3 nghiem"<<endl;
						xuat(-sqrt((-b+sqrt(delta))/(2*a)));
						xuat(0);
						xuat( sqrt((-b+sqrt(delta))/(2*a)));
					}
					//neu tong am
					else
					{
						if(a*b>0)
						{
							cout<<"phuong trinh co 1 nghiem"<<endl;
							xuat(0);
						}
						
					}
				}
				else
				{
					cout<<"phuong trinh co 2 nghiem"<<endl;
					xuat(-sqrt((-b+sqrt(delta))/(2*a)));
					xuat( sqrt((-b+sqrt(delta))/(2*a)));
	
			    }
			}	
	   }
	   else
	   {
	   	//neu delta =0
	   	 if(delta==0)
	   	 {
	   	 	if(a*b<0)
	   	 	{
	   	 		cout<<"phuong trinh co 2 nghiem"<<endl;
	   	 		xuat(-sqrt(-b/(2*a)));
	   	 		xuat( sqrt(-b/(2*a)));
			}
			else
			{
				if(a*b==0)
				{
					cout<<"phuong trinh co 1 nghiem"<<endl;
					xuat(0);
				}
				else
				{
					cout<<"phuong trinh vo nghiem"<<endl;
				}
			}
		 }
		 else
		 {
		 	cout<<"phuong trinh vo nghiem"<<endl;
		 }
	   }
	}
}
