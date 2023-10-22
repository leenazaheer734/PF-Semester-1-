#include <iostream>
using namespace std;
int arrSize, sum =0;
char letter;
string check;
int wordcount;
string words[20];
int checking (string check, int wordcount);
main()
{
    cout << "How many words you want to enter: " << endl;
    cin >> arrSize;

    for (int index = 0; index < arrSize; index++)
    {
        cin >> words[index];
    }

    cout << "Enter the letter you want to count: ";
    cin >> letter;

    for (int index = 0; index < arrSize; index++)
    {
        wordcount = words[index].length();
        check = words[index];
        sum = sum +  ( checking(check, wordcount));
    }

    if (sum > 0)
    {
        cout << letter << " occured " << sum << " times!";
    }
    else
    {
        cout << letter << " is not present! ";
    }
}

int checking (string check, int wordcount)
{
    int counter = 0;
    for (int indx = 0; indx < wordcount; indx++)
        {
            if (check[indx] == letter)
            {
                counter++;
            }
    }
    return counter;
}