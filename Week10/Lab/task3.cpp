#include <iostream>
using namespace std;
int size;
int count = 0;
int newnumbers[20];
int numbers[20];
bool checking(int previous, int current, int next);
main()
{
    bool flag;
    cout << "Enter how many numbers you will enter: ";
    cin >> size;

    for (int index = 0; index < size; index++)
    {
        cin >> numbers[index];
    }
    cout << endl;
    for (int indx = 1; indx < size - 1; indx++)
    {
        flag = checking(numbers[indx - 1], numbers[indx], numbers[indx + 1]);
        if (flag == true)
        {
            newnumbers[count] = numbers[indx];
            count++;
        }
    }
    if (count != 0)
    {
        for (int i = 0; i < count; i++)
        {
            cout << newnumbers[i] << "  ";
        }
    }
    else
    {
        cout << "no peak found!";
    }
}
bool checking(int previous, int current, int next)
{
    bool flags = false;
    if ((previous < current) && (next < current))
    {
        flags = true;
    }
    return flags;
}