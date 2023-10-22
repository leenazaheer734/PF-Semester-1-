#include <iostream>
using namespace std;
void triangles(int rows);
main()
{
    int rows;
    cout<<"Enter rows: ";
    cin>> rows;
    triangles(rows);
}
void triangles(int rows)
{
    for(int x = rows; x>=1; x--)
    {
        for(int y=x; y<= rows; y++)
        {
            cout<<"*";
        }
        for(int z=x ; z>=2; z--)
        {
            cout<<" ";
        }
        for(int y= x; y >= 2 ; y--)
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