#include <iostream>
using namespace std;
void issuechallan(int speed);

main()
{
   int speed;
 while(true)
{
 
  cout<< "Enter speed of car: ";
  cin>> speed;
  issuechallan(speed);

}

}

void issuechallan(int speed)
{
    if(speed == 100)
    {
     cout<<" Perfect! You are doing good." << endl;
     }
    if(speed > 100)
    {
     cout<<" Halt!you can be challenged."<< endl ;
     }

    if(speed < 100)
    {
     cout<< "You are following speed limit! "<< endl;
     }
}