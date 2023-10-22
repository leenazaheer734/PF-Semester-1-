#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"Input :";
    cin>> word;
    int count = word.length();
    if(count%2 == 0)
    {
        cout<<"True!";
    }
    else
    {
        cout<<"False!";
    }
}