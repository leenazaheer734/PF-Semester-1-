#include <iostream>
using namespace std;
float calculatediscount(float amount, string day, string month);
main()
{
    float amount;
    string day, month;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    float payable = calculatediscount(amount, day, month);
    cout << "your payable amount is: " << payable;
}
float calculatediscount(float amount, string day, string month)
{
    float discount;
    if (day == "sunday" )
    {
        if (month == "october" || month == "march" || month == "august")
    {
        float dis = amount - (amount * 10) / 100;
        discount = dis;
    }
    }
    if (day == "monday")
    {
        if (month == "november" || month == "december")
    {
        float dis = amount - (amount * 5) / 100;
        discount = dis;
    }
    }
    else
    {
        discount = amount;
    }
    return discount;
}