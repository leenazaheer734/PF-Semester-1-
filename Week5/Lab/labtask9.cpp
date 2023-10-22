#include <iostream>
#include <cmath>
using namespace std;
float positive_quadratic(float a, float b, float c);
float negative_quadratic(float a, float b, float c);

main()
{

 float a, b, c;
 
 cout<< "Enter a from equation: ";
 cin>> a;

 cout<< "Enter b from equation: ";
 cin>> b;

 cout<< "Enter c from equation: ";
 cin>> c;
  
 float total=positive_quadratic( a,b,c);
 
 cout<< "positive value of x is: "<< total<< endl;
 
  float ttotal= negative_quadratic( a,b,c);
 
 cout<< "negative value of x is: "<< ttotal<< endl;

}

float positive_quadratic(float a, float b, float c)
{
  float sqB =pow(b,2);
  float disc= sqB-4*(a*c);
  float sqroot= sqrt(disc);
  float mid= -b+sqroot;
  float x= mid/ (2*a);
  return x;
}
  

  
float negative_quadratic(float a, float b, float c)
{
  float sqB =pow(b,2);
  float disc= sqB-4*(a*c);
  float sqroot= sqrt(disc);
  float mid= -b-sqroot;
  float y= mid/ (2*a);
  return y;
}
  

 