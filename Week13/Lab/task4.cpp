#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
bool checkIdentity();
int matrix[3][3] = {{1, 0, 0},
                    {0, 1, 1},
                    {0, 0, 1}};
main()
{
    bool flag = checkIdentity();
    if (flag == false)
    {
        cout <<" Not an Identity Matrix!";
    }
    else if (flag == true)
    {
        cout <<" Identity Matrix!";
    }
}

bool checkIdentity()
{
    bool flag = true;
    int count = 0;
    for (int rows = 0; rows < 3; rows++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (rows == col && matrix[rows][col] == 1)
            {
                count++;
            }
            else if (rows != col && matrix[rows][col] != 0)
            {
                flag = false;
                return flag;
            }
            else if (count == 3)
            {
                flag = true;
            }
        }
    }
    return flag;
}