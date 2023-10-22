#include <iostream>
using namespace std;
void upperpart(int rows);
void lowerpart(int rows);
main()
{ 
    int rows;
    cout<<"Enter rows: ";
    cin>> rows;
    upperpart(rows);
    lowerpart(rows);

}
void upperpart(int rows)
{
    for(int x = rows ; x >= 1; x--)
    {
        for(int y= x; y >= 1 ; y--)
        {
            cout<<" ";
        }
        for(int z=x ; z<= rows; z++)
            {
                cout<<"*";
            }
        cout<<endl;
    }
}
void lowerpart(int rows)
{
    for(int x = rows; x>=1; x--)
    {
        for(int y=x; y<= rows; y++)
        {
            cout<<" ";
        }
        for(int z=x ; z>=1; z--)
        {
            cout<<"*";
        }
        cout<< endl;
    }
}
