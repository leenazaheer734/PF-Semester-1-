#include <iostream>
#include <cmath>
using namespace std;
bool check(int number);

main()
{
  int number;
  cout << "Enter a number: ";
  cin >> number;

  bool checking;

  checking = check(number);
  if (checking == true)
  {
    cout << "numbr is symmetrical!!" << endl;
  }
  if (checking == false)
  {
    cout << "numbr is not symmetrical!!" << endl;
  }
}

bool check(int number)
{
  int num1 = number % 10;
  int rem1 = number / 10;

  int num2 = rem1 % 10;
  int rem2 = rem1 / 10;

  if (num1 == rem2)
  {
    return true;
  }
  if (num1 != rem2)
  {
    return false;
  }
  return 0;
}