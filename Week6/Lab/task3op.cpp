#include <iostream>
using namespace std;
bool isequal(int num1, int num2, int num3);
main()
{
    int num1, num2, num3;
    cout<<"Enter first number: ";
    cin>> num1;
    cout<<"Enter second number: ";
    cin>> num2;
    cout<<"Enter third number: ";
    cin>> num3;
    bool answer = isequal(num1, num2, num3);
    if(answer == true)
    {
        cout<<"yess!";
    }
    else if(answer == false)
    {
        cout<<"no!";
    }

}
bool isequal(int num1, int num2, int num3)
{
    if(num1 == num2 && num2== num3)
    {
        return true;
    }
    else if(num1 != num2 || num2!= num3)
    {
        return false;
    }
}