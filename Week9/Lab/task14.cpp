#include <iostream>
using namespace std;
main()
{
    int first[2], size;
    cout<<"Enter numbers of first array: "<< endl;
    cin>> first[0];
    cin>> first[1];

    cout<<"enter size of second array: ";
    cin>> size;
    int second[size];
    for(int index = 0; index < size; index++)
    {
        cout<<"Enter number of second array: ";
        cin>> second[index];
    }
    int third[size+2];

    third[0]= first[0];
    third[size+1]= first[1];

    for(int index = 0; index != size ; index++)
    {
        third[index+1]= second[index];
    }

    for(int index = 0; index != size+2 ; index++)
    {
        cout<< third[index]<<"  ";
    }

}