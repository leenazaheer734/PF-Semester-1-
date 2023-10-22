#include <iostream>
using namespace std;
void swapNumbers(int &number1, int &number2);
main()
{
    int number1 = 15;
    int number2 = 25;
    cout << "The value of number1 is: " << number1 << endl;
    cout << "The value of number2 is: " << number2 << endl;
    cout <<  endl;
    swapNumbers(number1, number2);
    cout << "The value of number1 after swap is: " << number1 << endl;
    cout << "The value of number2  after swap is: " << number2 << endl;
}
void swapNumbers(int &number1, int &number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;
}