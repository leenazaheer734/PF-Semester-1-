#include <iostream>
using namespace std;
int triangle(int number);
main()
{
    int number;
    cout<<"Enter number: ";
    cin>> number;
    cout<< triangle(number);
}
int triangle(int number)
{
    int current=0, next=0 ;
    for(int x= 1; x<= number; x++)
    {
        next= current+x;
        current= next;
    }
    return next;

}