#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>> size;

    int numbers[size];
    int largest = numbers[0];

    for (int index = 0; index < size; index++)
    {
        cout << "Enter number: ";
        cin >> numbers[index];
    }
    for(int index = 0; index < size; index++)
    {
        if( numbers[index]  > largest)
        {
            largest = numbers[index];
        }
    }
    cout<< "largest : " << largest;
}