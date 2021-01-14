#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> arr;
	arr.resize(5);//cap phat cho mang so nguyen chuwa 5 so 0;
	//nhap mang
	for(int i=0; i<arr.size();i++)
    cin>>arr[i];
    
	//arr.resize(10);//thay doi kich thuowc phan tu
//	arr.push_back(12);//them tu ddong phan tu i vaof cuois mangr
//	arr.pop_back();//xoa phantucuoi cung
//	arr.erase(arr.begin()+2);//xoa arr[2]
 // arr.insert(arr.begin()+ 1, 69);//chen phan tu 69 vao vij tris 2
//	cout<<arr.at(2)<<endl;// truy xuat phan tuthu i
	//cout<<arr.capacity();//kichthuowc thatsu
//	cout<<arr.max_size();
//	cout<<"phan tu cuoi cung:"<<arr.back()<<endl;
//	cout<<"phan tu dau tien :"<<arr.front();
	//xuat mang
	sort(arr.begin(), arr.end());
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" "<<endl;
	}
	
}
