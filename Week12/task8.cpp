#include <iostream>
#include <fstream>
using namespace std;
main()
{
    char data;
    int count = 1;
    fstream myFile;
    myFile.open("names.txt", ios::in);
    while(!myFile.eof())
    {
        myFile >>data;
        count++;
    }
    cout << "ther are " << count << " characters in this file";
    myFile.close();
}