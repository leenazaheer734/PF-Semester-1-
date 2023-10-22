#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string data;
    int count = 0;
    fstream myFile;
    myFile.open("names.txt", ios::in);
    while(!myFile.eof())
    {
        getline(myFile, data);
        count++;
    }
    cout << "ther are " << count << " lines in this file";
    myFile.close();
}