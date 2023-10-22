#include <iostream>
#include <cmath>
using namespace std;
float height(float base, float degree);

main()
{

 int base;
 float degree;

  while(true)
{
   cout<< "Enter base: ";
   cin>> base;

   cout<< "Enter angle in degree: ";
   cin>> degree;
 
   float triangle= height(base, degree);
   cout<<"Height of perpendicular is: " << triangle << endl<< endl;
 }

}


float height(float base, float degree)
{
  
 float radian=57.2958;
 float angle=degree/ radian;
 float total=tan(angle);
 float perpend= base*total;
  return perpend;
}