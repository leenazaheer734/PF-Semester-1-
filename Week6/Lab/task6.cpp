#include <iostream>
using namespace std;
float cheapest(int kilometers, string timeoftravel);
main()
{

    int kilometers;
    string timeoftravel;
    cout << "Enter number of kilometers you want to travel: ";
    cin >> kilometers;
    cout << "Enter timeoftravel: ";
    cin >> timeoftravel;
    cout<< cheapest( kilometers, timeoftravel);
}
float cheapest(int kilometers, string timeoftravel)
{    
    float fare;
    float bus=0.09;
    float train=0.06;
    if (kilometers < 20)
    {
        if (timeoftravel == "day")
        {
         fare = (kilometers * 0.79) + 0.70;
        }
        else if (timeoftravel == "night")
        {
         fare = (kilometers * 0.90) + 0.70;
        }
    }
    if (kilometers >= 20 && kilometers < 100)
    {
         fare = kilometers * bus;
    }
    if (kilometers >= 100)
    {
         fare = kilometers * train;
    }
    return fare;
}