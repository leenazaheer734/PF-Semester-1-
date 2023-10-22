#include <iostream>
using namespace std;
main()
{
    int arrSize;
    string result = "7 is not presenrt!";
    cout<<"Enter array size: ";
    cin>> arrSize;

    int  number[arrSize];

    for(int index =0 ; index< arrSize; index++)
    {
        cin>> number[index];
    }
    int mod;
    for(int index =0 ; index < arrSize; index++)
    {
        for(int idx= number[index] ; idx > 0 ; idx = idx / 10 )
        {
            mod = idx % 10;
            if(mod == 7)
            {
                result = "Boom";
                break;
            }
            
        }
    }
    cout<< result;
}