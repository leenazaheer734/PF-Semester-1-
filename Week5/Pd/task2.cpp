#include <iostream>
using namespace std;
float volume(float length, float width, float height, string units);
main()
{
    float length, width, height;
    string units;
    cout << "Enter lenght: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height:";
    cin >> height;
    cout << "Enter units in which you want volume:";
    cin >> units;
    float pyramid = volume(length, width, height, units);
    cout << "the volume of pyramid is " << pyramid << " cubic " << units;
}

float volume(float length, float width, float height, string units)
{
    float vol = (length * width * height) / 3;
    if (units == "meters")
    {
        return vol;
    }
    if (units == "centimeters")
    {
        float incenti = vol * 1000000;
        return incenti;
    }
    if (units == "milimeters")
    {
        float inmili= vol * 1000000000;
        return inmili;
    }
    if (units == "kilometers")
    {
        float inkilom= vol / 1000000000;
        return inkilom;
    }
}