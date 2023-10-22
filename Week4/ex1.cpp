#include <iostream>
using namespace std;
void add();
void product();
main()
{
   add();
   product();
}


void add()
 {
  int number1,number2,sum;
  
  cout<< "Enter first number: ";
  cin>> number1;
  cout<< "Enter second number: ";
  cin>> number2;
  
  sum= number1+ number2;
  cout<< "The sum is: " << sum<< endl; 
 }

void product()
 {
   
 int number1,number2,product;
  cout<< "Enter third number: ";
  cin>> number1;
  cout<< "Enter fourth number: ";
  cin>> number2;

  product= number1*number2;
  cout<< "The product is: "<< product<< endl;
  }