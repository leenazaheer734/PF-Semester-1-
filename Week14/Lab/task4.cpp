#include <iostream>
using namespace std;
float avgArray(int numbers[], int arrSize);

main()
{ 
    int arrSize = 5;
    int numbers[arrSize] = {1,2,3,4,5};
    float average = avgArray(numbers, arrSize);
    cout << "Average of numbers in array is: "<< average;
}

float avgArray(int numbers[], int arrSize)
{
    float sum = 0.0, avg=0;
    for(int idx= 0 ; idx <arrSize; idx++)
    {
        sum = sum + numbers[idx];
    }
    avg = sum / arrSize;
    return avg;
}