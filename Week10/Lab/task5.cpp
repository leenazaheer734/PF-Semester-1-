#include <iostream>
using namespace std;
main()
{
    int boxes, sum=0;
    cout << "Enter number of boxes: ";
    cin >> boxes;
    int sides = boxes*3;
    int vol[sides];

    for( int index=0; index < sides; index++ )
    {
        cin>> vol[index];
    }

    for( int index=0; index < sides; index = index+3 )
    {
        sum =  sum + (vol[index]*vol[index+1]*vol[index+2]);
    }
    cout << sum;
}