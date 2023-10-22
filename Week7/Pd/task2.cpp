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
    for(int x = rows; x>=1; x-- )
    {
        for(int y=x ; y >=1; y--)
        {
            cout<<"*";
        }
        cout<< endl;
    }
}