#include <iostream>
using namespace std;
main(){

float charge, current,time;

cout<< "Enter charge in coulumb: ";
cin>> charge;

cout<< "Enter time in second: ";
cin>> time;

current = charge/time;

cout<< "The current is: " << current;
}