#include <iostream>
#include <conio.h>
#include <functional>
 
int (*pSum)(int &a, int &b);
 
int SumValue(int &value1, int &value2) 
{
  return (value1 + value2);
}
 
int main()
{
 
  pSum = SumValue;
  int val1 = 4;
  int val2 = 5;
 std::cout << pSum(val1, val2);
 
  _getch();
    return 0;
}
 
 
