#include <iostream>
#include <cmath>
using namespace std;
float calculatePrice(float inheritedmoney, int yeartolive);

main()
{
    float inheritedmoney;
    int yeartolive;

    cout << "Enter amount received by Ivan in inheritance: ";
    cin >> inheritedmoney;
    cout << "Enter year till when Ivan wants to live: ";
    cin >> yeartolive;
    float totalExpense = calculatePrice(inheritedmoney, yeartolive);
    if (totalExpense >= 0)
    {
        cout << "Yess! He will live aa carefree life and will have " << ceil(totalExpense*100.0)/100.0 << " dollars left.";
    }
    else if (totalExpense < 0)
    {
        float need = fabs(totalExpense);
        cout << "He will need " << ceil(need*100.0)/100.0 << " dollars to survive.";
    }
}
float calculatePrice(float inheritedmoney, int yeartolive)
{
    int count = 18;

    for (int pastyear = 1800; pastyear <= yeartolive; pastyear++)
    {
        if (pastyear % 2 == 0)
        {
            inheritedmoney = inheritedmoney - 12000;
        }
        else if (pastyear % 2 != 0)
        {
            inheritedmoney = inheritedmoney - (12000 + (50 * count));
        }
        count = count + 1;
    }

    float expense = inheritedmoney;
    return expense;
}