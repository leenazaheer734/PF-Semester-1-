#include <iostream>
using namespace std;
main()
{
    string word;
    int count=0;
    
    cout<<"enter word : ";
    getline(cin, word);

    for(int index=0 ; word[index] != '\0'; index++)
    {
        count++ ; 
    }
    cout<< count;
}