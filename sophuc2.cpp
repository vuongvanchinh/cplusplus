#include <iostream>

using namespace std;

struct complexNumber
{
    double realPart,imaginaryPart;
  //  complexNumber()//khong can thiet
  //  {
   //     realPart = 0;
   //     imaginaryPart = 0;
   // }
    complexNumber(double initRealPart,double initImaginaryPart)
    {
    	realPart=initRealPart;
    	imaginaryPart=initImaginaryPart;
        // your code here
    }
    complexNumber multiply(complexNumber other)
    {
    	 return complexNumber (realPart*other.realPart- imaginaryPart * other.imaginaryPart,
		                        realPart*other.imaginaryPart + imaginaryPart*other.realPart);
    }
};

int main()
{
    double realPart,imaginaryPart;
    cin >> realPart >> imaginaryPart;
    complexNumber complex1(realPart,imaginaryPart);
    cin >> realPart >> imaginaryPart;
    complexNumber complex2(realPart,imaginaryPart);
    complexNumber product = complex1.multiply(complex2);
    cout << product.realPart << " " << product.imaginaryPart << endl;
    return 0;
}


