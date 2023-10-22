#include <iostream>
using namespace std;
main()
{
    string check;
    cout<<"Input: ";
    cin>> check;

    int count= check.length();
    int same=0;
    for(int index = 0; index <= count; index++)
    {
        if ((check[index] == 'a' ) || (check[index] == 'e') || (check[index] == 'i') || (check[index] == 'o') || (check[index] == 'u') )
        {
            same++;
        }
    }
    cout<< same;
}