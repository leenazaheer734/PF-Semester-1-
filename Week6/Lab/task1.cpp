#include <iostream>
using namespace std;
char grade(int marks);
main()
{

    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    char calculatedgrade = grade(marks);
    cout << " your grade is: " << calculatedgrade;
}
char grade(int marks)
{
    char result;
    if (marks>=0 && marks < 50)
    {
        result = 'F';
    }
    else if (marks >= 50 && marks <= 60)
    {
        result = 'E';
    }
    else if (marks > 60 && marks <= 70)
    {
        result = 'D';
    }
    else if (marks > 70 && marks <= 80)
    {
        result = 'C';
    }
    else if (marks > 80 && marks <= 85)
    {
        result = 'B';
    }
    else if(marks> 85 && marks <= 100)
    {
        result = 'A';
    }
    return result;
}