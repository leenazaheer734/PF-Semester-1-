#include <iostream>
using namespace std;
main()
{
    int number =10;
    int *pntr = &number;
    cout << "The Address of variable is: "<< pntr;
}