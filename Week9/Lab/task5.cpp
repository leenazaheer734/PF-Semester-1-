#include <iostream>
using namespace std;
main()
{
    int size, multiple;
    cout<<"Enter size of array: ";
    cin>> size;

    int numbers[size];

    for (int index = 0; index < size; index++)
    {
        cout << "Enter number: ";
        cin >> numbers[index];
    }

    int product[size];

    cout<<"Enter number to multiply: ";
    cin>> multiple;

    for(int index = 0; index < size; index++)
    {
        product[index] = numbers[index] * multiple;
    }
    for(int index = size-1; index >= 0; index--)
    {
        cout<< product[index]<<"  ";
    }

}