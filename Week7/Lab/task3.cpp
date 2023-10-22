#include <iostream>
using namespace std;
void totaldigits(int number);
main()
{
    int number;
    cout<<"Enter a number: ";
    cin>> number;
    totaldigits(number);
}
void totaldigits(int number)
{
    int counter = 0 ;
    while (number > 0)
    {
    number = number / 10;
    counter = counter + 1;
    
    }
    cout<< counter;
}