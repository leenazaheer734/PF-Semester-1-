#include <iostream>
using namespace std;
main()
{
    string word1, word2;
    cout<<"Enter word: ";
    cin>> word1;
    cout<<"Enter other word: ";
    cin>> word2;
    int counter=0;
    int count= word1.length();

    for(int index=0; index < count; index++)
    {
        for(int idx=1; idx <= count; idx++)
        {
        if(word1[index] == word2[idx])
        {
            word2[idx] = '.';
            counter++;
            break;
        }
        }
        
    }
    cout<< counter;
}