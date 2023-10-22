#include <iostream>
using namespace std;
int days[20];
int weeks;
int checkCondition();
main()
{

    cout << "Enter number of weeks for which you want to check progress: ";
    cin >> weeks;
    for (int index = 0; index < weeks; index++)
    {
        cout << "Enter number of miles: ";
        cin >> days[index];
    }
    int result;
    result = checkCondition() ;
    cout << "Progress Days:  " << result ;
}


int checkCondition()
{
    int counter =0;
    for (int index = 0; index < weeks - 1; index++)
    {
        if (days[index] < days[index + 1])
        {
            counter++;
        }
    }
    return counter;
}