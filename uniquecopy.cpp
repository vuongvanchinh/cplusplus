#include <iostream>     
#include <algorithm>    
#include <vector>  
     
using namespace std;



int main () {
	int n;
	cin>>n;
vector<int> v(n);
 for(int i=0; i<n; i++)
   cin>>v[i];
sort(v.begin(), v.end());
vector<int>::iterator last = unique(v.begin(), v.end());
v.erase(last, v.end());
//cout << v.size();	  
     for(int i=0; i<v.size(); i++)
   cout<<v[i]<<" ";                 
}
