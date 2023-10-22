#include <iostream>
using namespace std;
main()
{
    string word;
    char alphabet;

    cout<<"enter word : ";
    getline(cin, word);
    cout<<"enter alphabet to check: ";
    cin>> alphabet;

    int count = word.length();


    if(word[count-1] == alphabet)
    {
        cout<<"true";
    }
    else 
    {
        cout<<"False";
    }

}