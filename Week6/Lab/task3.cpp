#include <iostream>
using namespace std;
string decidetitle(float age, char gender);
main()
{

    float age;
    char gender;
    cout<<"Enter age: ";
    cin>> age;
    cout<<"Enter gender: ";
    cin>> gender;

    string check = decidetitle( age, gender);
    cout<<"title is: "<< check;

    
}
string decidetitle(float age, char gender)
{
    string title; 
    if (age >= 16)
    {
            if( gender == 'm')
            {
                title = "Mr.";
            }
            else if( gender == 'f')
            {
                title = "Ms.";
            }
    }
    if(age < 16)
    {

            if( gender == 'm')
            {
                title = "Master";
            }
            else if( gender == 'f')
            {
                title = "Miss";
            }
    }
    return title;
}