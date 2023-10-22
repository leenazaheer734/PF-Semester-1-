#include <iostream>
using namespace std;

void onsunday(string day, int amount);
void anyotherday(string day, int amount);
main()
{

  int amount;
  string day;
 while(true)
{

  cout<< "Enter what day it is: ";
  cin>> day;
  cout<< "Enter amount of total purchase: ";
  cin>> amount;
 
 if(day == "sunday")
 {
   onsunday(day, amount);
 }
  
  if(day == "saturday")
 {
   anyotherday(day, amount);
 }
  
   if(day == "friday")
 {
   anyotherday(day, amount);
 }


   if(day == "thursday")
 {
   anyotherday(day, amount);
 }


   if(day == "wednesday")
 {
   anyotherday(day, amount);
 }

   if(day == "tuesday")
 {
   anyotherday(day, amount);
 }

  if(day == "monday")
 {
   anyotherday(day, amount);
 }

}

}




  void onsunday(string day, int amount)
 {
   float extra;
   extra= (amount*0.1);
   int bill;
   bill= amount- extra;
   cout<<"total bill is: "<< bill<< endl;
 }
   
 void anyotherday(string day, int amount)
 {
   
  float extra;
  extra= (amount*0.05);
   int bill;
  bill = amount- extra;
  cout<< "your bill is: " << bill<< endl;
 }









