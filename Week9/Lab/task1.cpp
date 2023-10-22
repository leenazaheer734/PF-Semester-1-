#include <iostream>
using namespace std;
main()
{
    int arrSize;

    cout<<"Enter size of array: ";
    cin>> arrSize;

    float CGPA[arrSize];

    for (int index = 0; index < arrSize; index++)
    {
        cout << "Enter CGPA of student " << index + 1 << " : ";
        cin >> CGPA[index];
    }

    for (int index = 0; index < arrSize; index++)
    {
        cout <<CGPA[index] <<"   " ;
    }
}