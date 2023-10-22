#include <iostream>
using namespace std;
int calculatesum(int number);
main()
{
    int number;
    cout<<"Enter a number: ";
    cin>> number;
    cout<< calculatesum(number);
}
int calculatesum(int number)
{   
    int mod;
    int sum =0;
    while (number> 0)
    {
        mod = number % 10;
        number = number /10;
        sum = sum + mod;
    }
    return sum;
    
}