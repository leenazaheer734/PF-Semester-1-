#include <iostream>
using namespace std;
void fibonacci(int length);
main()
{
    int length;
    cout<<"Enter the length of series: ";
    cin>> length;
    fibonacci( length);
}
void fibonacci(int length)
{

    int previous=0;
    int current =1 ;
    int next;
    cout<< previous<< " "<< current;
    for(int count = 1 ; count <= length-2 ; count++)
    {
        next = previous + current;
        cout<< " "<< next;
        
        previous = current;
        current = next;
    }
}
