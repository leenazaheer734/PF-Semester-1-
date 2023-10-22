#include <iostream>
using namespace std;
main()
{
    int arrSize, number;
    bool isfound = false;

    cout<<"Enter size of array: ";
    cin>> arrSize;

    int check[arrSize];

    for (int index = 0; index < arrSize; index++)
    {
        cout << "Enter number" << index+1 << " : ";
        cin >> check[index];
    }
    cout<<"Enter number to  check: ";
    cin>> number;


    for(int index=0; index < arrSize; index++)
    {
        if(number == check[index] )
        {
            isfound = true;
            break;
        }
    }

    if ( isfound == true)
    {
        cout<<"number found! ";
    }
    else
    {
        cout<<"not found! ";
    }
    
}
