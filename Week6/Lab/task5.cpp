#include <iostream>
using namespace std;
float totalincome(string screentype, int rows, int columns);
main()
{
    string screentype;
    int rows, columns;
    cout << "Enter type of screening: ";
    cin >> screentype;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> columns;
    cout<< totalincome( screentype, rows, columns);
}
float totalincome(string screentype, int rows, int columns)
{
    float premiere=12.00;
    float normal   =7.50;
    float discount =5.00;
    float amount;
    int totalseats= rows* columns;
    if(screentype == "premiere")
    {
        amount = premiere*totalseats;
    }
    else if(screentype == "normal")
    {
        amount = normal*totalseats;
    }
    else if(screentype == "discount")
    {
        amount = premiere*totalseats;
    }
    return amount;

}