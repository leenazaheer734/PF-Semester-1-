#include <iostream>
#include <cmath>
using namespace std;
void printprcentage(int number);
main()
{   
    int number;
    cout<<"n : ";
    cin>> number;
    printprcentage(number);
}

void printprcentage(int number)
{
    int countP1=0;
    int countP2=0;
    int countP3=0;
    int countP4=0;
    int countP5=0;
    int checking;

    for(int x = 1 ; x <= number; x++)
    {
        cout<<"Enter a number: ";
        cin>> checking;
    if(checking < 200 )
    {
        countP1 = countP1 + 1;
    }
    else if(checking >= 200 && checking <= 399 )
    {
        countP2 = countP2 + 1;
    }
    else if(checking >= 400 && checking <= 599 )
    {
        countP3 = countP3 + 1;
    }
    else if(checking >= 600 && checking <= 799 )
    {
        countP4 = countP4 + 1;
    }
    else if(checking >= 800 )
    {
        countP5 = countP5 + 1;
    }
}
    double percent1 = (countP1 *100.0) / number;
    double percent2 = (countP2 *100.0) / number;
    double percent3 = (countP3 *100.0) / number;
    double  percent4 = (countP4 *100.0) / number;
    double  percent5 = (countP5 *100.0) / number;
    cout<< ceil(percent1*100.0)/100<< endl;
    cout<< ceil(percent2*100.0)/100.0<< endl;
    cout<< ceil(percent3*100.0)/100.0<< endl;
    cout<< ceil(percent4*100.0)/100.0<< endl;
    cout<< ceil(percent5*100.0)/100.0<< endl;

}