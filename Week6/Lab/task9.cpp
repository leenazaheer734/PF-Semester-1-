#include <iostream>
#include <cmath>
using namespace std;
float volleyball(string typeofyear, int holidays, int weekendgoing);
main()
{
    string typeofyear;
    int weekendgoing; 
    int holidays;
    cout << "Enter type of year: ";
    cin >> typeofyear;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends on which he goes home: ";
    cin >> weekendgoing;
    float playtime =  volleyball(typeofyear, holidays, weekendgoing);
    cout << "he plays " <<  playtime << " times";
}
float volleyball(string typeofyear, int holidays, int weekendgoing)
{
    int play;
    int stayinsofia = 48 - weekendgoing;
    float playinsofia = (holidays * .666) + (stayinsofia * .75);
    float totalplay = playinsofia + weekendgoing;
    if (typeofyear == "normal")
    {
        play = totalplay;
    }
    else if (typeofyear == "leap")
    {
        play= totalplay + (totalplay * .15);
    }

    return play;
}