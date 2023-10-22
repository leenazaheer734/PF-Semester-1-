#include <iostream>
using namespace std;
void weightloose(int weighttoloose);
main()
{

int weighttoloose, daysittakes;
while(true)
 {
 cout<< "Enter  weight you want to loose in kgs: ";
  cin>> weighttoloose;

 weightloose( weighttoloose);

 }
}

void weightloose(int weighttoloose)
{ 
  int onekgdays=15;
  int daysittakes= onekgdays* weighttoloose;

cout<< "It will take you " << daysittakes <<" days to loose " << weighttoloose <<" kgs" << endl;
}