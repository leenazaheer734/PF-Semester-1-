#include <iostream>
using namespace std;

float stayinappart( string staymonth, int numberofnights);
float stayinstudio( string staymonth, int numberofnights);
main()
{ 
    string staymonth;
    int numberofnights;
    cout<<"Enter month : ";
    cin >> staymonth;
    cout<<"Enter number of nights: ";
    cin>> numberofnights;

    float appartmentprice = stayinappart( staymonth, numberofnights);
    cout<< "appartmentprice:  "<< appartmentprice<< endl;

    float studio = stayinstudio (staymonth, numberofnights);
    cout<< "studio:  " << studio;
}

float stayinappart( string staymonth, int numberofnights)
{ 
    float total;
        if(numberofnights >=1 && numberofnights <=14)
        {
            if(staymonth == "may" || staymonth == "october" )
            {
                total= numberofnights * 65.00;
            }
            else if(staymonth == "june" || staymonth == "september" )
            {
                total= numberofnights * 68.70;
            }
            else if(staymonth == "july" || staymonth == "august" )
            {
                total= numberofnights * 77.00;
            }
        }

        else if(numberofnights > 14)
        {
            if(staymonth == "may" || staymonth == "october" )
            {
                float withoutdis= (numberofnights * 65.00);
                total = withoutdis - (withoutdis* 0.1);
            }
            else if(staymonth == "june" || staymonth == "september" )
            {
                float withoutdis= numberofnights * 68.70;
                total = withoutdis - (withoutdis* 0.1);
            }
            else if(staymonth == "july" || staymonth == "august" )
            {
                float withoutdis= numberofnights * 77.00;
                total = withoutdis - (withoutdis* 0.1);
            }
        }

    return total;
}

float stayinstudio( string staymonth, int numberofnights)
{
    float total;
    if(staymonth == "may" || staymonth == "october" )
    {
        if(numberofnights >=1 &&  numberofnights <= 7)
        {
            total = numberofnights * 50.00;
        }
        else if(numberofnights > 7 && numberofnights <=14)
        {
            float withoutdis= numberofnights * 50.00;
            total = withoutdis - (withoutdis* 0.05);
        }
        else if(numberofnights > 14 )
        {
            float withoutdis= numberofnights * 50.00;
            total = withoutdis - (withoutdis* 0.3);
        }
    }

    else if(staymonth == "june" || staymonth == "september" )
    {
        if(numberofnights >=1 &&  numberofnights <= 14)
        {
            total = numberofnights * 75.20;
        }
        else if(numberofnights > 14)
        {
            float withoutdis= numberofnights * 75.20;
            total = withoutdis - (withoutdis* 0.2);
        }
    }

    else if(staymonth == "july" || staymonth == "august" )
    {
            total = numberofnights * 76.00;
        
    }
    return total;

}
