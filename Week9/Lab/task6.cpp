#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>> size;

    int numbers[size];
    int smallest = numbers[0];

    for (int index = 0; index < size; index++)
    {
        cout << "Enter number: ";
        cin >> numbers[index];
    }
    for(int index = 0; index < size; index++)
    {
        if( numbers[index]  < smallest)
        {
            smallest = numbers[index];
        }

    }
    cout<< "smallest : " << smallest;
}