#include <iostream>
using namespace std;
float calculatepercent(float  totalmarks);
string decidegrade(float percent);
main()
{
    string name;
    float english, maths, chem, social, biology;

    cout << "Enter name of student: ";
    cin >> name;
    cout << "Enter marks in english: ";
    cin >> english;
    cout << " Enter marks in maths: ";
    cin >> maths;
    cout << "Enter marks in chemistry: ";
    cin >> chem;
    cout << "Enter marks in social science: ";
    cin >> social;
    cout << "Enter marks in biology: ";
    cin >> biology;

    float totalmarks = english + maths + chem + social + biology;
    float percent = calculatepercent(totalmarks);
    string grading = decidegrade( percent);

    cout << name << "has obtained " << totalmarks << " total marks and obtained " << percent << " percent and " << grading <<" grade."<< endl;
}

float calculatepercent(float  totalmarks)
{
    float percentage = (totalmarks * 100) / 500;
    return  percentage;
}
string decidegrade(float percent)
{
    string grade;
    if (percent >= 90 && percent <= 100)
    {
        grade = "A+";
    }
    else if (percent >= 80 && percent < 90)
    {
        grade = "A";
    }
    else if (percent >= 70 && percent < 80)
    {
        grade = "B+";
    }
    else if (percent >= 60 && percent < 70)
    {
        grade = "B";
    }
    else if (percent >= 50 && percent < 60)
    {
        grade = "C";
    }
    else if (percent >= 40 && percent < 50)
    {
        grade = "D";
    }
    else if (percent < 40 )
    {
        grade = "F";
    }
    return grade;
}
