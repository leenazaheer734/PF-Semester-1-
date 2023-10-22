#include <iostream>
using namespace std;
main()
{
    int starthour, startmin, arrivalhour, arrivalmin;

    cout << "Enter the hour when exam starts: ";
    cin >> starthour;
    cout << "Enter the min when exam starts: ";
    cin >> startmin;
    cout << "Enter the hour of arrival of student: ";
    cin >> arrivalhour;
    cout << "Enter the min of arrival of student: ";
    cin >> arrivalmin;

    int starttime = (starthour * 60) + startmin;
    int arrivaltime = (arrivalhour * 60) + arrivalmin;

    if (starttime > arrivaltime)
    {
        if ((arrivaltime + 30) < starttime)
        {
            int early = starttime - arrivaltime;
            int earlymin = early % 60;
            int earlyhour = early / 60;

            cout << "Early" << endl;
            if (earlyhour < 1)
            {
                cout << earlymin << " minutes before the start!" << endl;
            }
            else if (earlyhour >= 1)
            {
                cout << earlyhour << ":" << earlymin << " hour before  the start." << endl;
            }
        }

        else if ((arrivaltime + 30) >= starttime)
        {
            int early = starttime - arrivaltime;
            int earlymin = early % 60;
            int earlyhour = early / 60;
            cout << "on time!" << endl;
            cout << earlymin << " minutes before the start!" << endl;
        }
    }

    else if (arrivaltime > starttime)
    {
        cout << "late!" << endl;
        int late = arrivaltime - starttime;
        int latemin = late % 60;
        int latehour = late / 60;
        if (latehour < 1)
        {
            cout << latemin << " minutes after the start" << endl;
        }
        else if (latehour >= 1)
        {
            cout << latehour << ":" << latemin << " hour after the start " << endl;
        }
    }

    else if (starttime == arrivaltime)
    {
        cout << "On time!" << endl;
    }
}