#include <iostream>
using namespace std;
void velocitycalculation(float initialvelocity,float finalvelocity, int time, float acceleration);
main()
{

  float initialvelocity, finalvelocity, time, acceleration;
  while(true) 
 {
  cout<< "Enter initial velocity: ";
  cin>> initialvelocity;

  cout<< "Enter acceleration: ";
  cin>> acceleration;

  cout<< "Enter time: ";
  cin>> time;

  velocitycalculation(initialvelocity, finalvelocity, time, acceleration);
  } 
}


 void velocitycalculation(float initialvelocity, float finalvelocity, int time, float acceleration)
{ 
    initialvelocity= (acceleration*time) + (initialvelocity);

      cout<< "Final velocity is: "<< finalvelocity<< endl;
 }
