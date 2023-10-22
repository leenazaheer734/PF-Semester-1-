#include <iostream>
using namespace std;
void iseven(int number);
void isodd(int number);

main()
{

 int number;
 
 while(true)
 {
   
   cout<< "Enter a number: ";
   cin>> number;
 
   if(number%2 == 0)
  {
   iseven(number);
  }

    if(number%2 != 0)
  {
   isodd(number);
  }


 }

}


void iseven(int number)
 {
   
   cout<< "Entered number is even! " << endl;
 }


void isodd(int number)
 {
  cout<< "Entered number is odd! " << endl;
 }