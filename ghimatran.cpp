#include<iostream>
#include<fstream>
using namespace std;
void xuatmang(int *a, int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<*(a+i*n+j)<<" ";
    }
    cout<<endl;
  }
}
void sapxep(int a[], int n){
    for(int i=0; i<n*n-1; i++){
        for(int j=i+1; j<n*n; j++){
               if(a[i]>a[j]){
                int tg=a[i];
                a[i]=a[j];
                a[j]=tg;
               } 
    }
}
}
int main(){
   fstream f("matran.txt", ios::in);
     if(!f.is_open()){
        cout<<"khong doc duoc file";
        return 0;
     }
     else{
        int *a, n;
        f>>n;
        a= new int [n*n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                f>>*(a+i*n+j);
        }
        xuatmang(a, n);
        sapxep(a, n);
        cout<<"\nma tran de sap xep:"<<endl;
        xuatmang(a, n);
         f.close();
     fstream f1("matran1.txt", ios::out);
       for(int i=0; i<n; i++){
       	for(int j=0; j<n; j++){
       		f1<<*(a+i*n+j);
       		f1<<" ";
		   }
		   f<<endl;
	   }
	   f1.close();
	   delete a;   
}
}
