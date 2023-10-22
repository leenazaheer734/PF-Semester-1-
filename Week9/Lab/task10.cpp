#include <iostream>
using namespace std;
main()
{
    string word;

    cout<<"enter word : ";
    getline(cin, word);
    int count = word.length();

    if(count % 2 == 0)
    {
        cout<<"even!";
    }
    else
    {
        cout<<"odd!";
    }
}