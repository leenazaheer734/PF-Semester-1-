#include <iostream>
using namespace std;
float calculateprice(string product, string place, int quantity);
main()
{
    string product, place;
    int quantity;
    cout << "Enter name of product: ";
    cin >> product;
    cout << "Enter place: ";
    cin >> place;
    cout << "enter quantity: ";
    cin >> quantity;
    float bill = calculateprice(product, place, quantity);
    cout<<"the payable amount is: "<< bill<< endl;

}
float calculateprice(string product, string place, int quantity)
{
    float total;

    if(product== "coffee")
    {
        if(place=="sofia")
        {
            total= quantity*0.50;
        }
        else if(place== "plovdiv")
        {
            total= 0.40* quantity;
        }
        else if(place== "varna")
        {
            total= 0.45*quantity;
        }
    }


    else if(product== "water")
    {
        if(place=="sofia")
        {
            total= 0.80 * quantity;
        }
        else if(place== "plovdiv" || place== "varna")
        {
            total= 0.70 * quantity;
        }
    }
    
    else if(product== "beer")
    {
        if(place=="sofia")
        {
            total= 1.20 * quantity;
        }
        else if(place== "plovdiv")
        {
            total= 1.15 * quantity;
        }
        else if(place== "varna")
        {
            total= 1.10 * quantity;
        }
    }

    else if(product== "sweets")
    {
        if(place=="sofia")
        {
            total= 1.45 * quantity;
        }
        else if(place== "plovdiv")
        {
            total= 1.30 * quantity;
        }
        else if(place== "varna")
        {
            total= 1.35 * quantity;
        }
    }

    else if(product== "peanuts")
    {
        if(place=="sofia")
        {
            total= 1.60 * quantity;
        }
        else if(place== "plovdiv")
        {
            total= 1.50 * quantity;
        }
        else if(place== "varna")
        {
            total= 1.55 * quantity;
        }
    }
        return total;
}