#include <iostream>
using namespace std;
main()
{
    int arrSize;
    cout<<"Enter number of squares: ";
    cin>> arrSize;
    string colors[arrSize];

    for(int index=0; index < arrSize; index++)
    {
        cin>> colors[index];
    }

    int count=0;
    for(int index=0; index < arrSize-1; index++)
    {
        if(colors[index] != colors[index+1])
        {
            count++;
        }
    }
    int time = 2*arrSize + (count); 
    cout<<"time: "<< time<<" Seconds";
}