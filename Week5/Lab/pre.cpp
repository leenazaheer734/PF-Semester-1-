#include <iostream>
#include <cmath>
using namespace std;

main()
{
  float number1, number2, total;
  
  cout<<"Enter number: ";
  cin>> number1;
  cout<<"Enter another number: ";
  cin>> number2;
 
  total=max(number1, number2);
  cout<<"The greater number is: "<< total<< endl;

  total=min(number1, number2);
  cout<<"The smaller number is: "<<total<<endl;
  
  total=sqrt(number1);
  cout<<"the square root of "<< number1 <<" is "<<total<<endl;

  total=pow(number1,number2);
  cout<<" number1^number2 is: "<<total<< endl;
  
  total=cbrt(number1);
  cout<<"the cube root of "<< number1 <<" is "<<total<<endl;

  total=ceil(number1);
  cout<<"round off1 : "<<total<< endl;
  
  total=floor(number2);
  cout<<"round off2 :" << total;

}