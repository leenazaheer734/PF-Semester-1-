#include <iostream>
using namespace std;
float taxcalculator(char vehiclecode, int vehicleprice);
main()
{
    char vehiclecode;
    int vehicleprice;
    cout << "Enter type of vehicle u want to buy(M for motorcycle, E for electric, S for sedan, V for van, T for truck): ";
    cin >> vehiclecode;
    cout << "Enter price of vehicle:";
    cin >> vehicleprice;

    float payable = taxcalculator(vehiclecode, vehicleprice);
    cout << "the price of your vehicle " << vehiclecode << " is " << payable << " after adding tax" << endl;
}
float taxcalculator(char vehiclecode, int vehicleprice)
{
    if (vehiclecode == 'M')
    {
        float plustaxm = vehicleprice * 0.06;
        float aftertaxm = vehicleprice + plustaxm;
        return aftertaxm;
    }

    if (vehiclecode == 'E')
    {
        float plustaxe = vehicleprice * 0.08;
        float aftertaxe = vehicleprice + plustaxe;
        return aftertaxe;
    }

    if (vehiclecode == 'S')
    {
        float plustaxs = vehicleprice * 0.1;
        float aftertaxs = vehicleprice + plustaxs;
        return aftertaxs;
    }

    if (vehiclecode == 'V')
    {
        float plustaxv = vehicleprice * 0.12;
        float aftertaxv = vehicleprice + plustaxv;
        return aftertaxv;
    }
    if (vehiclecode == 'T')
    {
        float plustaxt = vehicleprice * 0.15;
        float aftertaxt = vehicleprice + plustaxt;
        return aftertaxt;
    }
}
