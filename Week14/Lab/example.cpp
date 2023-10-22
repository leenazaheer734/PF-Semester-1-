#include <iostream>
using namespace std;
void passArray(int numbers[], int arrSize);

main()
{ 
    int arrSize = 5;
    int numbers[arrSize] = {1,2,3,4,5};
    passArray(numbers, arrSize);
}

void passArray(int numbers[], int arrSize)
{
    for(int idx=arrSize-1; idx>=0; idx--)
    {
        cout << numbers[idx]<<"  ";
    }
}