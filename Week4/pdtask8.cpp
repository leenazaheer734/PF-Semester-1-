#include <iostream>
using namespace std;

 void isequal(int num1, int num2);
main()
{
  
 int num1, num2;

 while(true)
{

  isequal(num1, num2);

 }

}

void isequal(int num1, int num2)
{

  cout<< "Enter a number: ";
  cin>> num1;
  cout<< "Enter another number: ";
  cin>> num2;

  if( num1== num2)
  { 
    cout<<"true" << endl;
  }
   if (num1!= num2)
  {
     cout<<"false"<< endl;
   }

}



