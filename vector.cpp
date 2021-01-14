// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
 using namespace std;
bool myfunction (int i, int j) { return (i <j); }
 
 
int main () {
	int n;
	cin>>n;
  int myints[n] ;
  for(int i=0; i<n; i++)
  cin>>myints[i];
  std::vector<int> myvector (myints, myints + 8);             // 32 71 12 45 26 80 53 33
 
  // using default comparison (operator <):
  std::sort (myvector.begin(), myvector.end() + 4);         //(12 32 45 71)26 80 53 33
 
  // using function as comp
  std::sort (myvector.begin() + 4, myvector.end(), myfunction); // 12 32 45 71(26 33 53 80)
 
  // using exist comp function
  std::sort (myvector.begin(), myvector.end(), std::greater<int>());     // std::less<int>() by default
 
  // print out content:
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
 
  return 0;
}
 
