#include <iostream>
#include <cmath>
using namespace std;
float calculatemoney(int age, int toyprice, int machinecost);
main()
{
    int age, toyprice;
    float machinecost;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter price of toy: ";
    cin >> toyprice;
    cout << "Enter cost price of washing machine: ";
    cin >> machinecost;
    float savedmoney = calculatemoney(age, toyprice, machinecost);
    if (savedmoney >= machinecost)
    {
        cout << "Yess!!!" << endl;
        cout << ceil(( savedmoney - machinecost)*100.0)/100.0 << " $ ";
    }
    else
    {
        cout << "not enough money to buy washing machine!!!" << endl;
        cout << ceil((machinecost - savedmoney)*100.0)/100.0 << " $ ";
    }
}
float calculatemoney(int age, int toyprice, int machinecost)
{
    int sum = 0, giftmoney, oddcounter=0, evencounter = 0;

    for (int agecount = 1; agecount <= age; agecount++)
    {
        if (agecount % 2 != 0)
        {
            oddcounter++;
        }
        else if (agecount % 2 == 0)
        {
            sum = sum + 1;
            giftmoney = (sum * 10) -1;
            evencounter = evencounter + giftmoney;
        }
    }
    float toytotalmoney = oddcounter * toyprice;
    float collected = toytotalmoney + evencounter;
    return collected;
}
