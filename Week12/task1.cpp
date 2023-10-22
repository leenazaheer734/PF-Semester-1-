#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string data = "This is sample text file!";
    fstream myFile;
    myFile.open("names.txt", ios::out);
    myFile << data;
    myFile.close();
}