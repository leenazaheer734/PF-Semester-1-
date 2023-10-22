#include <iostream>
using namespace std;
void printasterisks(int rows);

main()
{
    int rows;
    cout<<"Enter rows: ";
    cin>> rows;
    printasterisks(rows);
}
void printasterisks(int rows)
{
    for(int x = 1 ; x <= rows; x++)
    {
        for(int y=1; y <=x ; y++)
        {
            cout<<"*";
        }
        cout<< endl;
    }
}