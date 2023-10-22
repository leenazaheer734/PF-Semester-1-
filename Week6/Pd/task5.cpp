#include <iostream>
using namespace std;
float calculateprice(string day, string fruit, float quantity);
int errorcheck(string day, string fruit);
main()
{
    string day, fruit;
    float quantity;

    cout << "Enter day: ";
    cin >> day;
    cout << "ENter fruit: ";
    cin >> fruit;
    int errors =errorcheck( day, fruit);
    if(errors ==0)
    {
        cout<<"error ";
        return 0;
    }
    if(errors == -1)
    {
        cout<<"error ";
        return 0;
    }
    else
    {
    cout << "Enter quantity of " << fruit << " you wan to buy: ";
    cin >> quantity;
    
    float total = calculateprice(day, fruit, quantity);

    cout << "The price is: " << total;
    }
}

float calculateprice(string day, string fruit, float quantity)
{  
    float final;
    if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        if (fruit == "kiwi")
        {
            final = quantity * 2.70;
        }
        else if (fruit == "banana")
        {
            final = quantity * 2.50;
        }
        else if (fruit == "apple")
        {
            final = quantity * 1.20;
        }
        else if (fruit == "orange")
        {
            final = quantity * .85;
        }
        else if (fruit == "grapefruit")
        {
            final = quantity * 1.45;
        }
        else if (fruit == "pineapple")
        {
            final = quantity * 5.50;
        }
        else if (fruit == "grapes")
        {
            final = quantity * 3.85;
        }
    }


    else if (day == "saturday" || day == "sunday" )
    {
        if (fruit == "kiwi")
        {
            final = quantity * 3.00;
        }
        else if (fruit == "banana")
        {
            final = quantity * 2.70;
        }
        else if (fruit == "apple")
        {
            final = quantity * 1.25;
        }
        else if (fruit == "orange")
        {
            final = quantity * .90;
        }
        else if (fruit == "grapefruit")
        {
            final = quantity * 1.60;
        }
            else if (fruit == "pineapple")
        {
            final = quantity * 5.60;
        }
            else if (fruit == "grapes")
        {
            final = quantity * 4.20;
        }
    }
    return final;
}
int errorcheck(string day, string fruit)
{
    int final;
    if(day!="sunday" && day!= "saturday" && day!= "monday" && day!= "tuesday" && day!= "wednesday" &&day!="friday" && day!= "thursday")
    {
        final = -1;
    }
    else if (fruit!= "kiwi" && fruit!= "apple" && fruit!= "orange" && fruit!= "grapes" && fruit!= "pineapple" && fruit !="grapefruit" && fruit!= "banana")
    {
        final = 0;
    }
    return final;
}