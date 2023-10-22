#include<iostream>
using namespace std;
void rotateArray(int numbers[], int arrSize, int position, int rotatednum[]);
main()
{
    int position;
    int arrSize = 9;
    int numbers[arrSize] = {3,2,1,4,4,6,7,8,9};
    int rotatednum[arrSize];

    cout << "Enter position(n) from which to rotate array: ";
    cin >> position;

    rotateArray(numbers,arrSize,position, rotatednum);

    for(int i =0; i<9;i++)
    {
        cout << rotatednum[i] <<" ";
    }
}

void rotateArray(int numbers[], int arrSize, int position, int rotatednum[])
{
    for(int i =0 ; i<arrSize;i++)
    {
        if(i < position)
        {
            rotatednum[(arrSize-position)+ i] = numbers[i] ;
        }
        else if( i >= position)
        {
            rotatednum[i-position] = numbers[i];
        }
    }
}