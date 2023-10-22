#include <iostream>
using namespace std;
void printpercentage(int number);
main()
{
    int number;
    cout<<"Enter number: ";
    cin>> number;
    printpercentage(number);
}
void printpercentage(int number)
{
    int countP1 =0, countP2=0, countP3 =0;
    int check;
    for (int x=1 ; x<= number; x++)
    {
        cin>> check;
        if(check %2 == 0)
        {
            countP1= countP1+1;
        }
        if(check %3 == 0)
        {
            countP2= countP2+1;
        }
        if(check %4 == 0)
        {
            countP3 = countP3 +1;
        }
    }
    float percent1 = (countP1 *100.0)/number;
    float percent2 = (countP2 *100.0)/number;
    float percent3 = (countP3 *100.0)/number; 
    cout<<"percent1: "<< percent1<< endl;
    cout<<"percent2: "<<percent2<< endl;
    cout<<"percent3: "<<percent3<< endl;
}