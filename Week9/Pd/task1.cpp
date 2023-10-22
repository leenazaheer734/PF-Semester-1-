#include <iostream>
using namespace std;
main()
{
    string fruit[4] = {"peach", " apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    string name;
    int quantity, bill;

    cout << "Enter name of fruit you want to buy:"<< endl;
    cin >> name;
    cout << "Enter quantity of fruit in kgs:"<< endl;
    cin >> quantity;
    for (int index = 0; index < 4; index++)
    {
        if (fruit[index] == name)
        {
            bill = price[index] * quantity;
        }
    }
    cout << "bill: " << bill;
}