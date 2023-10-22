#include <iostream>
using namespace std;
main()
{
    string elements[4];
    for (int index = 0; index < 4; index++)
    {
        cout<<"Enter string; ";
        cin >> elements[index];
    }
    if (elements[0] == elements[1] && elements[1] == elements[2] && elements[2] == elements[3])
    {
        cout << "true";
    }
    else
    {
        cout << "FAlse";
    }
}