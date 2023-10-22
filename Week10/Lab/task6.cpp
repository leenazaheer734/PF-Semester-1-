#include <iostream>
using namespace std;
main()
{
    int place;
    int weights[10];
    int position = 0;

    for(int index=0; index<10; index++)
    {
        cin>> weights[index];
    }


    for (int idx=0 ; idx<10; idx++)
    {
    int smallest = weights[idx]; 
    int i = idx;
    while( i < 10)
    {
        if(weights[i]< smallest)
        {
            smallest = weights[i];
        }
        i++;
    }

    for( int index=0; weights[index] != smallest; index++)
    {
        position++;
    }

    place = weights[idx];
    weights[idx] = smallest;
    weights[position] = place;
    position=0;
    }

    for(int index=0; index<10; index++)
    {
        cout<< weights[index]<<"  ";
    }

}