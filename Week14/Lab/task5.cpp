#include <iostream>
using namespace std;
bool checkSparse(int numbers[][3], int arrSize);

main()
{
    int arrSize = 3;
    int numbers[arrSize][3] = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    bool flag = checkSparse(numbers,arrSize);
    if(flag == true)
    {
        cout << "Matrix is Sparse!";
    }
    if(flag == false)
    {
        cout << "Matrix is not Sparse!";
    }
}

bool checkSparse(int numbers[][3], int arrSize)
{
    float check = (arrSize*arrSize) /2;
    float count = 0.0;
    for (int rows = 0; rows < 3; rows++)
    {
        for (int col = 0; col < arrSize; col++)
        {
            if (numbers[rows][col] == 0)
            {
                count++;
            }
        }
    }
    if (count > check)
    {
        return true;
    }
    return false;
}