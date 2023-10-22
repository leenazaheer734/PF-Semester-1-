#include <iostream>
#include <cmath>
using namespace std;
double calculateexpense(int quantity, int budget, string ticketType);
main()
{
    int quantity;
    string ticketType;
    int budget;
    cout << "Enter your budget: ";
    cin >> budget;
    cout << "Enter type of ticket: ";
    cin >> ticketType;
    cout << "Enter number of people: ";
    cin >> quantity;
    double total = calculateexpense(quantity, budget, ticketType);
    if (total >= 0)
    {
        cout << "yes! you have " << total << " QR left" << endl;
    }
    else if (total < 0)
    {
        cout << "not enough money! you need " << fabs(total) << " QR" << endl;
    }
}
double calculateexpense(int quantity, int budget, string ticketType)
{
    double expense, payable;
    if (quantity > 0 && quantity <= 4)
    {
        double remainingmoney = budget - (budget * 0.75);
        if (ticketType == "VIP")
        {
            expense = quantity * 499.99;
            payable = remainingmoney - expense;
        }
        else if (ticketType == "normal")
        {
            expense = quantity * 249.99;
            payable = remainingmoney - expense;
        }
    }

    else if (quantity >= 5 && quantity <= 9)
    {
        double remainingmoney = budget - (budget * 0.65);
        if (ticketType == "VIP")
        {
            expense = quantity * 499.99;
            payable = remainingmoney - expense;
        }
        else if (ticketType == "normal")
        {
            expense = quantity * 249.99;
            payable = remainingmoney - expense;
        }
    }

    else if (quantity >= 10 && quantity <= 24)
    {
        double remainingmoney = budget - (budget * 0.50);
        if (ticketType == "VIP")
        {
            expense = quantity * 499.99;
            payable = remainingmoney - expense;
        }
        else if (ticketType == "normal")
        {
            expense = quantity * 249.99;
            payable = remainingmoney - expense;
        }
    }

    else if (quantity >= 25 && quantity <= 49)
    {
        double remainingmoney = budget - (budget * 0.40);
        if (ticketType == "VIP")
        {
            expense = quantity * 499.99;
            payable = remainingmoney - expense;
        }
        else if (ticketType == "normal")
        {
            expense = quantity * 249.99;
            payable = remainingmoney - expense;
        }
    }

    else if (quantity >= 50 )
    {
        double remainingmoney = budget - (budget * 0.25);
        if (ticketType == "VIP")
        {
            expense = quantity * 499.99;
            payable = remainingmoney - expense;
        }
        else if (ticketType == "normal")
        {
            expense = quantity * 249.99;
            payable = remainingmoney - expense;
        }
    }
    return payable;
}