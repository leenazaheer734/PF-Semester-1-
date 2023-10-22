#include <iostream>
using namespace std;
main()
{
    int size, count =0;
    cout<<"How many direc5ions you want to enter: ";
    cin >> size;
    string directions[size];
    for(int i= 0 ; i < size; i++)
    {
        cin >> directions[i];
    }
    for  (int i = 0; i < size; i= i+4)
    {
        if(directions[i] == directions[i+1] && directions[i+1] == directions[i+2] && directions[i+2] == directions[i+3] )
        {
            count++;
        }
    }
    cout<< "SPins are: "<< count;
}
