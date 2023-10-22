#include  <iostream>
using namespace std;
main ()
{
    
    int arrSize;

    cout<<"Enter size of array: ";
    cin>> arrSize;

    float reverse[arrSize];

    for (int index = 0; index < arrSize; index++)
    {
        cout << "Enter number: ";
        cin >> reverse[index];
    }

    for(int index = arrSize-1; index >= 0; index--)
    {
        cout<< reverse[index]<<"  ";
    }
}