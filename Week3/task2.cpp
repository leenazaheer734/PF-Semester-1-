#include <iostream>
using namespace std;
void addition(int integer1, int integer2);

main()
{
  int integer1, integer2, sum;
  while(true)
 {
  cout<< "Enter first integer: ";
  cin>> integer1;

  cout<< "Enter second integer: ";
  cin>> integer2;

   addition(integer1,integer2);
 }

}



  void addition(int integer1, int integer2)
{
 int sum= integer1 + integer2;

 cout<< "The sum is " << sum<< endl;

}