#include <iostream>
using namespace std;
main()
{
    string check;

    cout << "Enter : ";
    getline(cin , check);

    int count = check.length();

    for (int index = 0; index < count; index++)
    {
        if (check[index] == 'a')
        {
            cout << "b";
        }
        else if (check[index] == 'b')
        {
            cout << "c";
        }
        else if (check[index] == 'c')
        {
            cout << "d";
        }
        else if (check[index] == 'd')
        {
            cout << "e";
        }
        else if (check[index] == 'e')
        {
            cout << "f";
        }
        else if (check[index] == 'f')
        {
            cout << "g";
        }
        else if (check[index] == 'h')
        {
            cout << "i";
        }
        else if (check[index] == 'i')
        {
            cout << "j";
        }
        else if (check[index] == 'j')
        {
            cout << "k";
        }
        else if (check[index] == 'l')
        {
            cout << "m";
        }
        else if (check[index] == 'k')
        {
            cout << "l";
        }
        else if (check[index] == 'm')
        {
            cout << "n";
        }
        else if (check[index] == 'p')
        {
            cout << "q";
        }
        else if (check[index] == 'n')
        {
            cout << "o";
        }
        else if (check[index] == 'r')
        {
            cout << "s";
        }
        else if (check[index] == 's')
        {
            cout << "t";
        }
        else if (check[index] == 't')
        {
            cout << "u";
        }
        else if (check[index] == 'u')
        {
            cout << "v";
        }
        else if (check[index] == 'v')
        {
            cout << "x";
        }
        else if (check[index] == 'x')
        {
            cout << "y";
        }
        else if (check[index] == 'y')
        {
            cout << "z";
        }
        else if (check[index] == 'z')
        {
            cout << "a";
        }
        else{
            cout<<" ";
        }
    }
}