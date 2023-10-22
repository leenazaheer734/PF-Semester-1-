#include <iostream>
using namespace std;
void result(int sub1, int sub2, int sub3, int sub4, int sub5);

main(){

string name;
int sub1, sub2, sub3, sub4, sub5, sum;
float percentage;
 while (true)
{
 cout<< "Ener your name: ";
 cin>> name;

 cout<< "Enter subject 01 marks: ";
 cin>> sub1;

 cout<< "Enter subject 02 marks: ";
 cin>> sub2;

 cout<< "Enter subject 03 marks: ";
 cin>> sub3;

 cout<< "Enter subject 04 marks: ";
 cin>> sub4;

 cout<< "Enter subject 05 marks: ";
 cin>> sub5;

 result( sub1, sub2, sub3, sub4, sub5);

}


}

void result(int sub1, int sub2, int sub3, int sub4, int sub5)
{

 int sum= sub1+ sub2 +sub3 +sub4 +sub5;
int percentage= (sum*100)/ 500;

 cout<< "Percentage is: " << percentage<< endl;
}