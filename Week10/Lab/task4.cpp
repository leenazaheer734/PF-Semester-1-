#include <iostream>
using namespace std;
int numbers[20];
int size;
int truecount = 0;
main()
{
    int cyclelength;
    cout << "Enter size: ";
    cin >> size;
    cout << "Enter length of cycle: ";
    cin >> cyclelength;

    for (int index = 0; index < size; index++)
    {
        cin >> numbers[index];
    }

    if (cyclelength > size)
    {
        cout << "True";
        return 0;
    }

    else if (cyclelength < size)
    {
        for (int index = 0; index < cyclelength; index++)
        {
            if (numbers[index] == numbers[index + cyclelength])
            {
                truecount++;
            }
        }
    }

    if (truecount == (size-cyclelength))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
