#include <iostream>
using namespace std;
main()
{
    int size;
    float average;
    int sum=0;

    cout<<"Enter n : ";
    cin>> size;

    int math[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter number: ";
        cin >> math[index];
        sum = sum + math[index];
    }

    average = sum/ size;

    cout<< "sum is: "<< sum << endl;
    cout<< "average is: " << average << endl;
}