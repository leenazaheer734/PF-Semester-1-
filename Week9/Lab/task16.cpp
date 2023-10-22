#include <iostream>
using namespace std;
main()
{
    int size;
    float average;
    float sum = 0;

    cout << "Enter number of resistors connected in series: ";
    cin >> size;

    float resistance[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter number: ";
        cin >> resistance[index];
        sum = sum + resistance[index];
    }
    cout << "Total resistance  is: " << sum << " ohms." << endl;
}