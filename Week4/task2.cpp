#include <iostream>
using namespace std;

void iseligible();

void noteligible();

main()
{

  int age;
 while(true)
{ 
  cout<< "Enter your age: ";
  cin>> age;

  if(age >= 18)
  {
   iseligible();

   }
  if(age < 18)
  {

   noteligible();
  }
}

}

  void iseligible()
 {
    cout<< "You are eligible to vote! "<< endl;
 }

  void noteligible()
 {
   cout<< "YOu cannot vote! "<< endl;
 }