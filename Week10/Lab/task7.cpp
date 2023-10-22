#include <iostream>
#include <string>
using namespace std;
main()
{
    int count;
    string input;
    string output="";

    cout <<"Enter a sentence: ";
    getline(cin , input);

    count  = input.length();


    for(int idx = count ; idx >= 0; idx--)
    {
        if(input[idx] != ' ' || input[idx] == input[0])
        {
            output = output + input[idx];
        }
        if(input[idx] == ' ' || input[idx] == input[0])
        {
            for(int i= output.length() ; i >= 0; i--)
            {
                cout <<output[i];
            }
            cout << "\t";
            output = "";
        }
    }
}