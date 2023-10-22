#include <iostream>
using namespace std;
int calculateHCF(int number1, int number2);
int calculateLCM(int number1, int number2);
main()
{
    int number1, number2;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter number: ";
    cin >> number2;
    int result1 = calculateHCF(number1, number2);
    int result2 = calculateLCM(number1, number2);
    cout << "hcf: " << result1 << endl;
    cout << "lcm: " << result2;
}
int calculateHCF(int number1, int number2)
{
    int result, smaller, greater;
    if (number1 < number2)
    {
        smaller = number1;
        greater = number2;
    }
    else
    {
        smaller = number2;
        greater = number1;
    }

    for (int x = 1; x <= smaller; x++)
    {
        if (smaller % x == 0 && greater % x == 0)
        {
            result = x;
        }
    }
    return result;
}

int calculateLCM(int number1, int number2)
{
    int lcm = (number1 * number2) / calculateHCF(number1, number2);
    return lcm;
}