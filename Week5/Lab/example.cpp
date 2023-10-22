#include <iostream>
using namespace std;

int add(int number1, int number2);
float divide(float number1, float number2);
int isgreater(int number1, int number2);

main()
{
   int number1, number2, total, greater;
   float result;

  cout<<"Enter a number: ";
  cin>> number1;
  cout<<"Enter another number: ";
  cin>> number2;

  total= add(number1,number2);
  cout<<endl<<"The sum of given numbers is: "<<total<< endl;
 
  result= divide(number1,number2);
  cout<<"The result of division is: "<<result<<endl;
  
  greater=isgreater(number1, number2);
  cout<<"The number that is greater is: "<< greater<<endl;

  cout<<"Program ends";
   




}

int add(int number1, int number2)
{
  int sum=number1+number2;
  return sum;
}

float divide(float number1, float number2)
{
   float divide= number1/number2;
   return divide;
}  

int isgreater(int number1, int number2)
{
   if(number1>number2)
   {
       return number1;
   }
  if(number2>number1)
 {
    return number2;
 }
 return 0;
}




