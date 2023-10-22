#include <iostream>
using namespace std;

 void summ(int number);
main(){

int number;
while(true)
{
cout<< "enter 4 digit number u want modulus of: ";
cin>> number;
summ( number);
}


}
 void summ(int number)
 {
int  dig1, rem1, dig2 , rem2, dig3, rem3, sum;
  rem1= number%10;
  dig1= number/10;

  rem2= dig1%10;
  dig2= dig1/10;

 rem3= dig2%10;
  dig3= dig2/10;

 sum= rem1+rem2+rem3+dig3;

 cout<< "The sum is: " << sum<< endl << endl;

 }