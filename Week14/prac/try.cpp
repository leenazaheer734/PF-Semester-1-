#include <iostream>
using namespace std;
string encryption(string t)
{
    for (int i = 0; t[i] != '\0'; i = i + 2)
    {
        if (t[i] == 'r' || t[i] == 'd')
        {
            t[i] = '#';
        }
        else if (t[i] == 't' || t[i] == 'S')
        {
            t[i] = t[i];
        }
        else
        {
            t[i] = '$';
        }
    }
    return t;
}
main()
{
    string text = "Save World";
    text = encryption(text);
    cout <<text;
}