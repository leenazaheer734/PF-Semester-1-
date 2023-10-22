#include <iostream>
using namespace std;
main()
{
    string temperature, humidity;
    cout << "Enter temperature: ";
    cin >> temperature;
    cout << "Enter humidity: ";
    cin >> humidity;
    if (temperature == "warm" && humidity == "dry")
    {
        cout << "play tennis!";
    }
    else if (temperature == "warm" && humidity == "humid")
    {
        cout << "swim!";
    }
    else if (temperature == "cold" && humidity == "dry")
    {
        cout << "play basket ball!";
    }
    else if (temperature == "cold" && humidity == "humid")
    {
        cout << "watch tv!";
    }
}
