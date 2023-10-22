#include <iostream>
using namespace std;
main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    while (number <= 0)
    {
        cout << "Error! enter number graeter than zero " << endl;
        cout << "Enter a number again: ";
        cin>> number;
    }
}
