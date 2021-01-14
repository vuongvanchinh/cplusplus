#include<iostream>
#include<vector>
using namespace std;

 vector <string> A;
  int n,k,S[100], i=0;
void inra()
{
	for(int pos=i; pos>=0; pos--)
	{
		switch(pos)
		{
		
			case 8:
			{
				cout<<A[S[pos]];
				cout<<"hundred ";
				break;
			}
			
			case 7:
				{
					switch(S[7])
					{
						case 1:{
							cout<<A[10+S[6]];
							break;
						} 
						case 2:{
							cout<<A[20]<<"-"<<A[S[6]];
							break;
						}
						default:
							{
								cout<<A[S[7]]<<"ty-"<<A[S[6]];
								break;
							}
					}
					cout<<"million ";
					break;				
				}
				case 5:
					{
						cout<<A[S[5]];
						cout<<"hundred ";
						break;	
					}
				case 4:
				{
					switch(S[4])
					{
						case 1:{
							cout<<A[10+S[3]];
							break;
						} 
						case 2:{
							cout<<A[20]<<"-"<<A[S[3]];
							break;
						}
						default:
							{
								cout<<A[S[4]]<<"ty-"<<A[S[3]];
								break;
							}
					}
					cout<<"thounsand ";
					break;				
				}
				case 2:
				{
					cout<<A[S[2]];
					cout<<"hundred ";
					break;
				}
				//
				case 1:
					{
						switch(S[1])
						{
							case 1:{
								cout<<A[10+S[0]];
								break;
							} 
							case 2:{
								cout<<A[20]<<"-"<<A[S[0]];
								break;
							}
							default:
								{
									cout<<A[S[1]]<<"ty-"<<A[S[0]];
									break;
								}
						}
						break;				
					}
		}
	}
}

int main()
{
   //your code here
  
   A.push_back("zero ");A.push_back("five ");A.push_back("six ");A.push_back("seven ");
   A.push_back("one ");A.push_back("eight ");A.push_back("nine ");A.push_back("ten ");
   A.push_back("two ");A.push_back("eleven ");A.push_back("tewlve ");A.push_back("thirteen ");
   A.push_back("three ");A.push_back("fourteen ");A.push_back("fifteen");
   A.push_back("four "); A.push_back("sixteen");A.push_back("seventeen"); A.push_back("eighteen ");
   A.push_back("nineteen ");
   A.push_back("twenty");
   

  
   cin>>n;
   k=n;
   while(k>0)
   {
   	 S[i]=k%10;
   	 k/10;
   	 i++;
   }//113416719 one hundred thirteen million four hundred sixteen thousand seven hundred nineteen
   for(int k=i; k>=0; k++)
   {
   	 cout<<S[k]<<" ";
   }
	
   return 0;
}


