#include <iostream>
using namespace std;
int checkfrequency(int number, int check);
main()
{
    int number, check;
    cout<<"Enter the number: ";
    cin>> number;
    cout<<"Enter the number whose frequency you wqnt to check: ";
    cin>> check;
    cout<< checkfrequency(number, check);
}
int checkfrequency(int number, int check)
{
    int counter = 0;
    int mod;
    while(number > 0)
    {
        number = number / 10;
        mod= number % 10;
        if(mod == check)
        {
            counter = counter + 1;
        }
    }
    return counter;
}