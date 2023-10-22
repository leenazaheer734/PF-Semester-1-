#include <iostream>
using namespace std;
void check(string numbers);
int nums[10];
main()
{
    string numbers;

    string dance[10] = {"Shimmy", "Shake", "Piroutte", "Slide", "Boxstep", "Headspin", "Dosado", "Pop", "Lock", "Arabeseque"};
    cout << "Enter four digit pin: " << endl;
    getline(cin, numbers);
    int code = numbers.length();
    if(code > 4)
    {
        cout<<"Invalid input!";
        return 0;
    }
    check(numbers);
    
    for (int i = 0; i < 4; i++)
    {
        if (numbers[i] != '0' && numbers[i] != '1' && numbers[i] != '2' && numbers[i] != '3' && numbers[i] != '4' && numbers[i] != '5' && numbers[i] != '6' && numbers[i] != '7' && numbers[i] != '8' && numbers[i] != '9')
        {
            cout << "Invalid input!";
            return 0;
        }
    }

    int digit1 = nums[0];
    int digit2 = nums[1] + 1;
    int digit3 = nums[2] + 2;
    int digit4 = nums[3] + 3;

    cout << dance[digit1] << " ";

    if (digit2 <= 9)
    {
        cout << dance[digit2] << " ";
    }
    else if (digit2 > 9)
    {
        cout << dance[digit2 - 10] << " ";
    }

    if (digit3 <= 9)
    {
        cout << dance[digit3] << " ";
    }
    else if (digit3 > 9)
    {
        cout << dance[digit3 - 10] << " ";
    }

    if (digit4 <= 9)
    {
        cout << dance[digit4] << " ";
    }
    else if (digit4 > 9)
    {
        cout << dance[digit4 - 10] << " ";
    }
}
void check(string numbers)
{
    for (int indx = 0; indx < 4; indx++)
    {
        if (numbers[indx] == '0')
        {
            nums[indx] = 0;
            continue;
            ;
        }
        else if (numbers[indx] == '1')
        {
            nums[indx] = 1;
            continue;
            ;
        }

        else if (numbers[indx] == '2')
        {
            nums[indx] = 2;
            continue;
        }

        else if (numbers[indx] == '3')
        {
            nums[indx] = 3;
            continue;
        }
        
        else if (numbers[indx] == '4')
        {
            nums[indx] = 4;

            continue;
        }
        else if (numbers[indx] == '5')
        {
            nums[indx] = 5;

            continue;
            ;
        }
        else if (numbers[indx] == '6')
        {
            nums[indx] = 6;

            continue;
        }
        else if (numbers[indx] == '7')
        {
            nums[indx] = 7;

            continue;
        }
        else if (numbers[indx] == '8')
        {
            nums[indx] = 8;

            continue;
        }
        else if (numbers[indx] == '9')
        {
            nums[indx] = 9;
            continue;
        }
    }
}
