#include <iostream>
using namespace std;
char matrix[5][5] = {{'.', '.', '.', '*', '*'},
                     {'.', '*', '.', '.', '.'},
                     {'.', '*', '.', '.', '.'},
                     {'.', '*', '.', '.', '.'},
                     {'.', '.', '*', '*', '.'}};
string checkollision(int row, int collindex);
main()
{
    int row;
    string coordinate;
    cout << "Enter coordinates: ";
    cin >> coordinate;

    char rows = coordinate[0];
    char cols = coordinate[1];
    if (rows == 'A')
    {
        row = 0;
    }
    else if (rows == 'B')
    {
        row = 1;
    }
    else if (rows == 'C')
    {
        row = 2;
    }
    else if (rows == 'D')
    {
        row = 3;
    }
    else if (rows == 'E')
    {
        row = 4;
    }
    int collindex = int(cols) -'0';
    string result = checkollision(row, collindex);
    cout<<result;
}
string checkollision(int row,int collindex)
{
    string result;
    for(int x=0; x<5;x++)
    {
        for(int y=0; y<5; y++)
        {
            if(row == x && collindex == y)
            {
                if(matrix[x][y] == '.')
                {
                    result = "sPlaSh";
                    break;
                }
                else
                {
                    result = "bOom";
                }
            }
        }
    }
    return result;
}