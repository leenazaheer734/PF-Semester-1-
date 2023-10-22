#include <iostream>
using namespace std;
void patients(int days);

main()
{
    int days;
    cout << "enter days: ";
    cin >> days;
    patients(days);
}
void patients(int days)
{
    int count = 0;
    int numberofpatients, treated, untreated;
    int doctors = 7;
    int totaltreated = 0, totaluntreated = 0;
    for (int x = 1; x <= days; x++)
    {
        cin >> numberofpatients;
        count = count + 1;
        if (numberofpatients >= doctors)
        {
            if (count % 3 == 0)
            {
                if (totaluntreated > totaltreated)
                {
                    doctors = doctors + 1;
                }
            }
            untreated = numberofpatients - doctors;
            treated = doctors;
            cout << "treated: " << treated << " untreated: " << untreated << endl;
        }

        else if (numberofpatients < doctors)
        {
            if (count % 3 == 0)
            {
                if (totaluntreated > totaltreated)
                {
                    doctors = doctors + 1;
                }
            }

            treated = numberofpatients;
            untreated = 0;
            cout << "treated: " << treated << " untreated: " << untreated << endl;
        }

        totaluntreated = totaluntreated + untreated;
        totaltreated = totaltreated + treated;
    }
    cout << "treated = " << totaltreated << endl;
    cout << "untreated = " << totaluntreated << endl;
}