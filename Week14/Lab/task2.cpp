#include <iostream>
using namespace std;
void changenumber(int &number);
main()
{
    int number = 10;
    int *pntr = &number;
    cout << "The Address of variable is: " << pntr << endl;
    cout << "Value of variable number is: " << *pntr << endl;
    changenumber(number);
    cout << "Number after function is: "<< number; 
}
void changenumber(int &number)
{
    number++;
}