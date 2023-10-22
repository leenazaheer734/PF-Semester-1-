#include <iostream>
using namespace std;
int matrix[4][3] = {{0, 1, 2},
                    {0, 1, 2},
                    {0, 1, 2},
                    {0, 1, 2}};
int checkIndenticalArrays();
bool checkidentical(int row);
main()
{
    int result = checkIndenticalArrays();
    cout << result;
}
int checkIndenticalArrays()
{
    int counter = 0;
    for (int row = 0; row <3; row++)
    {
        bool flag = checkidentical(row);
        if (flag == true)
        {
            counter++;
        }
    }
    return counter;
}
bool checkidentical(int row)
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (matrix[row][i] != matrix[row + 1][i])
        {
            return false;
        }
        else if (matrix[row][i] == matrix[row + 1][i])
        {
            count++;
        }
        if (count == 3)
        {
            return true;
        }
    }
}