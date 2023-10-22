#include <iostream>
using namespace std;
string decidelocation(int x, int y, int h);

main()
{
    int x;
    int y;
    int h;

    cout << "h = ";
    cin >> h;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    string point = decidelocation(x, y, h);
    cout << point << endl;
}
string decidelocation(int x, int y, int h)
{
    string location;

    if (((x > 0 && x < (3 * h)) && (y > 0 && y < h)) || ((x > h && x < (2 * h)) && (y > h && y < (4 * h))))
    {
        location = "inside!";
    }
    else if (((x >= 0 && x <= 3 * h) && y == 0) || ((y >= h && y <= 4 * h) && (x == h || x == 2 * h)) || ((y >= 0 && y <= 2 * h) && (x == 0 || x == 3 * h)) || ((x >= h && x <= 2 * h) && y == 4 * h) || (((x >= 0 && x <= h) || (x >= 2 * h && x <= 3 * h)) && y == h))
    {
        location = "Border!";
    }
    else
    {
        location = "outside!";
    }
    return location;
}