#include <iostream>
using namespace std;
main(){

int inter, matric, ecat;
float percentinter, percentmatric, percentecat, aggregateinter, aggregatematric, aggregateecat, aggregate;

cout<< "Enter marks in matric out of 1100: ";
cin>> matric;

cout<< "Enter marks in intermediate out of 550: ";
cin>> inter;

cout<< "Enter marks in ecat out of 400: ";
cin>> ecat;

percentinter= inter*100/550;
percentmatric= matric*100/1100;
percentecat= ecat*100/400;


aggregateinter= percentinter*0.4 ;
aggregatematric= percentmatric*0.1;
aggregateecat= percentecat*0.5;

cout<< "your aggregate of matric is: " << aggregatematric << endl;
cout<< "your aggregate of inter is: " << aggregateinter<< endl;
cout<< "your aggregate of ecat is: " << aggregateecat<< endl;

aggregate= aggregateinter + aggregatematric + aggregateecat;
cout<< "Your aggregate is: " << aggregate;

}
