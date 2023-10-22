#include <iostream>
using namespace std;
main()
{
    int numbers[3];
    for(int index=0; index<3; index++)
    {
        cin>> numbers[index];
    }
    int n;
    cout<<"Enter number of times you want to perform even odd transformation: ";
    cin>> n;
    for(int index=0; index<3; index++)
    {
        if(numbers[index] % 2 == 0)
        {
            for(int i=1; i<=n; i++)
            {
            numbers[index]= numbers[index]-2;
            }
            cout<<numbers[index]<<"  ";
        }
        else
        {
            for(int i= 1; i<=n; i++)
            {
                numbers[index]= numbers[index]+2;  
            }
            cout<<numbers[index]<< "  ";
        }
    }
}