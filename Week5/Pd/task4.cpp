#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int hourneeded, daysavailable, numberofworkers;
    cout << "Enter hours firm need(0...200000): ";
    cin >> hourneeded;
    cout << "Enter days firm has(0...20000): ";
    cin >> daysavailable;
    cout << "Enter number of workers firm have(0...200): ";
    cin >> numberofworkers;

    // calculate days when workers work
    float actualdays = daysavailable - (daysavailable * 0.1);

    // calculte over time per day of evrey worker
    float overtimeperday = pow(2, numberofworkers);

    // calculate total hours workers work in that days
    float workinghour = actualdays * (8 + overtimeperday);

    // now round off
    int totalhoursofWork = floor(workinghour);
    int moretime = hourneeded - totalhoursofWork;

    // if workers work less hours than needed
    if (totalhoursofWork < hourneeded)
    {
        cout << "Not enough time!, " << moretime << " hours needed" << endl;
    }

    if (totalhoursofWork >= hourneeded)
    {
        cout << "Yess! " << totalhoursofWork-1 << " hours left" << endl;
    }
}
