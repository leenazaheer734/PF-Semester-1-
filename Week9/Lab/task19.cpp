#include <iostream>
using namespace std;
main()
{
    string current;

    cout<< "Enter string: ";
    getline(cin, current);

    for(int index=0; current[index]!= '\0'; index++)
    {
        if((current[index] =='a' ) || (current[index] == 'e') || (current[index] == 'i') || (current[index] == 'o') || (current[index] == 'u') )
        {
            continue;
        }
        cout<< current[index];
    }
}