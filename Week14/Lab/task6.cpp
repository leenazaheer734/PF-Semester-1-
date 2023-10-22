#include <iostream>
using namespace std;
void mergeArray(int numbers1[], int numbers2[], int numbers3[]);
main()
{
    int numbers1[3] = {1,2,3};
    int numbers2[3] = {4,5,6};
    int numbers3[3];
    mergeArray(numbers1, numbers2, numbers3);
    for(int i=0; i<6; i++)
    {
        cout << numbers3[i]<<" ";
    }
}

void mergeArray(int numbers1[], int numbers2[], int numbers3[])
{
    for(int idx=0 ;idx<6; idx++)
    {
        if(idx<3)
        {
            numbers3[idx] = numbers1[idx];
        }
        else if(idx>=3)
        {
            numbers3[idx] = numbers2[idx-3];
        }
    }
}