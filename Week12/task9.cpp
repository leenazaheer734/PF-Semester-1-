#include <iostream>
#include <fstream>
using namespace std;
main()
{
    char check;
    char data;
    int count = 0;
    cout <<"Enter character whose frequwncy you want to check: ";
    cin >> check;
    fstream myFile;
    myFile.open("names.txt", ios::in);
    while(!myFile.eof())
    {
        myFile >>data;
        if(data == check)
        {
            count++;
        }
    }
    cout << check << " frequency  is " << count ;
    myFile.close();
}