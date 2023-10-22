#include <iostream>
#include <cmath>
using namespace std;
string evenishoddish(int number);

main()
{

  int number;
  cout << "Enter a five digit number: ";
  cin >> number;
  string checked = evenishoddish(number);
  if (checked == "evenish")
  {
    cout << "number is evenish!!!" << endl;
  }
  if (checked == "oddish")
  {
    cout << "number is oddish!!!" << endl;
  }
}

string evenishoddish(int number)
{
  int num1 = number % 10;
  int rem1 = number / 10;
  int num2 = rem1 % 10;
  int rem2 = rem1 / 10;
  int num3 = rem2 % 10;
  int rem3 = rem2 / 10;
  int num4 = rem3 % 10;
  int rem4 = rem3 / 10;

  int sum = num1 + num2 + num3 + num4 + rem4;
  int checks = sum % 2;
  if (checks == 0)
  {
    return "evenish";
  }
  if (checks != 0)
  {
    return "oddish";
  }
}
