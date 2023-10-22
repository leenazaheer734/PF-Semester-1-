#include <iostream>
using namespace std;
char ground[7][7] = {{'#', ' ', ' ', ' ', ' ', ' ', '#'},
                     {'#', ' ', ' ', ' ', ' ', ' ', '#'},
                     {'#', '0', ' ', ' ', ' ', ' ', '#'},
                     {'#', '#', '#', '#', '#', '#', '#'},
                     {' ', ' ', ' ', '#', ' ', ' ', ' '},
                     {' ', ' ', ' ', '#', ' ', ' ', ' '},
                     {' ', ' ', ' ', '#', ' ', ' ', ' '}};
bool isGoalscored();
main()
{
    bool matchResult = isGoalscored();
    if(matchResult == true)
    {
        cout << "GoAl scored!";
    }
    else
    {
        cout << "GoAl not scored!";
    }
}
bool isGoalscored()
{
    for (int rows = 0; rows < 3; rows++)
    {
        for (int col = 1; col < 6; col++)
        {
            if (ground[rows][col] == '0')
            {
                return true;
            }
        }
    }
    return false;
}