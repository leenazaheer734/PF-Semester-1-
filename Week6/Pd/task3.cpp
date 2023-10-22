#include <iostream>
using namespace std;
string starsign(string birthmonth, int birthdate);
main()
{

    string birthmonth;
    int birthdate;

    cout << "Enter you birth month: ";
    cin >> birthmonth;
    cout << "Enter your date of birth: ";
    cin >> birthdate;
    string star= starsign(birthmonth, birthdate);

    cout<< star;

}
string starsign(string birthmonth, int birthdate)
{   
    string sign;

    if((birthmonth== "march" && (birthdate >= 21 || birthdate <= 31) )|| (birthmonth == "april" && (birthdate >=1 && birthdate <= 19)) )
    {
        sign = "Aries";
    }


    else if((birthmonth== "april" && (birthdate >= 20 || birthdate <= 30) )|| (birthmonth == "may" && (birthdate >=1 && birthdate <= 20)) )
    {
        sign = "Taurus";
    }

    else if((birthmonth== "may" && (birthdate >= 21 || birthdate <= 31) )|| (birthmonth == "june" && (birthdate >=1 && birthdate <= 20)) )
    {
        sign = "Gemini";
    }

    else if((birthmonth== "june" && (birthdate >= 21 || birthdate <= 30) )|| (birthmonth == "july" && (birthdate >=1 && birthdate <= 22)) )
    {
        sign = "Cancer";
    }

    else if((birthmonth== "july" && (birthdate >= 23 || birthdate <= 31) )|| (birthmonth == "august" && (birthdate >=1 && birthdate <= 22)) )
    {
        sign = "Leo";
    }

    else if((birthmonth== "august" && (birthdate >= 23 || birthdate <= 31) )|| (birthmonth == "september" && (birthdate >=1 && birthdate <= 22)) )
    {
        sign = "Virgo";
    }

    else if((birthmonth== "september" && (birthdate >= 23 || birthdate <= 30) )|| (birthmonth == "october" && (birthdate >=1 && birthdate <= 22)) )
    {
        sign = "Libra";
    }
    
    else if((birthmonth== "october" && (birthdate >= 23 || birthdate <= 31) )|| (birthmonth == "november" && (birthdate >=1 && birthdate <= 21)) )
    {
        sign = "scorpio";
    }

    else if((birthmonth== "november" && (birthdate >= 22 || birthdate <= 30) )|| (birthmonth == "december" && (birthdate >=1 && birthdate <= 21)) )
    {
        sign = "sagittarius";
    }

    else if((birthmonth== "december" && (birthdate >= 22 || birthdate <= 31) )|| (birthmonth == "january" && (birthdate >=1 && birthdate <= 19)) )
    {
        sign = "Capricorn";
    }
    else if((birthmonth== "january" && (birthdate >= 20 || birthdate <= 30) )|| (birthmonth == "february" && (birthdate >=1 && birthdate <= 18)) )
    {
        sign = "Aquarius";
    }
    else if((birthmonth== "feburary" && (birthdate >= 19 || birthdate <= 29) )|| (birthmonth == "march" && (birthdate >=1 && birthdate <= 20)) )
    {
        sign = "Pisces";
    }

    return sign;

}