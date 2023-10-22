#include <iostream>
using namespace std;
main()
{
    float sum = 0;
    float itemPrice;
    cout<<"Enter price of item you want to purchase: ";
    cin>> itemPrice;

    float coins[4];

    for (int index = 0; index < 4; index++)
    {
        cout << "Enter number: ";
        cin >> coins[index];
    }
    coins[0]=coins[0]*0.25;
    coins[1]=coins[1]*0.10;
    coins[2]=coins[2]*0.05;
    coins[3]=coins[3]*0.01;
    
    for (int index = 0; index < 4; index++)
    {
        sum= sum+ coins[index];
    }

    if(sum >= itemPrice)
    {
        cout<<"True";
    }
    else if(sum < itemPrice)
    {
        cout<<"FAlse";
    }
}