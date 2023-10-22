#include <iostream>
using namespace std;

void add(int number1, int number2);
void product(int number1, int number2);
void subtraction(int number1, int number2);
void divide(int number1, int number2);
main()
{
    
   int number1,number2;
   char operation;


   while(true)
 {
   cout<< "Enter first number: ";
   cin>> number1;
   cout<< "Enter second number: ";
   cin>> number2;
  
   cout<< "Enter operation you want to perform(+, -, *, /): ";
   cin>> operation;

   if(operation == '+')
  {
     add(number1, number2);
  }

   if(operation == '-')
  {
     subtraction(number1, number2);
  } 

  if(operation == '*')
  {
     product(number1, number2);
  }

   if(operation == '/')
  {
    divide(number1, number2);
  }

 }

}


  
void add(int number1,int number2)
{
    int sum;
   sum= number1+ number2;
  cout<< "The sum is: "<< sum<< endl;
}

void product(int number1, int number2)
{
  int product;
  product= number1* number2;
  cout<< "The product is: "<< product<< endl;
}

void subtraction(int number1, int number2)
{
  int subtract;
  subtract= number1-number2;
  cout<< "The result of subtarction is: "<< subtract<< endl;
}

void divide(int number1, int number2)
{ 
  float division;
  division= number1/number2;
  cout<< "The result of division is: " << division<< endl;
}




















