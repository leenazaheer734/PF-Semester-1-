#include <iostream>
using namespace std;
void amplify(int number);
main()
{
    int number;
    cout<<"Enter a number: ";
    cin>> number;
    amplify(number);
}
void amplify(int number)
{
    int y;
    for(int x=1; x<=  number; x++)
    {
        if( x % 4 == 0 )
        {
            y= x*10;

            if(y == number*10)
            {
                cout<<y<<" ";
                continue;
            }
            cout<<y<<",";
            continue;
        } 

        if(x == number)
        {
            cout<<x<<" ";
            break;
        }

        cout<<x<<",";
    }

}