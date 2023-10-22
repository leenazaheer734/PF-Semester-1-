#include <iostream>
using namespace std;
float calculatebill(char offertype, char timeofuse, float minsofservice);
main()
{
    char offertype, timeofuse;
    float minsofservice;



    
    cout << "Enter type of service u are availing(regular/premiun) type (r/p): ";
    cin >> offertype;
    cout <<  "Enter time for which service is used: ";
    cin>> minsofservice;
    cout << "(Press d for day time and n for night time): ";
    cin >> timeofuse;

    float payable = calculatebill( offertype, timeofuse , minsofservice);
    cout<<"the cahrges are: "<< payable;
}

float calculatebill(char offertype, char timeofuse, float minsofservice)
{
    float total;
    if (offertype == 'r')
    {
        if (minsofservice <= 50)
        {
            total = 10.00;
        }
        else if (minsofservice > 50)
        {
            total = (minsofservice * 0.20) + 10.00;
        }
    }
    else if (offertype == 'p')
    {
        if (timeofuse == 'd')
        {
            if (minsofservice <= 75)
            {
                total = 25.00;
            }
            else if (minsofservice > 75)
            {
                total = (minsofservice * 0.10) + 25.00;
            }
        }
        else if (timeofuse == 'n')
        {
            if (minsofservice <= 100)
            {
                total = 25.00;
            }
            else if (minsofservice > 100)
            {
                total = (minsofservice * 0.05) + 25.00;
            }
        }
    }
    return total;
}