#include <iostream>
#include <cmath>
using namespace std;


int main()
{
  int hours, minutes;
  cout<<"Enter hours: ";
  cin>> hours;
  cout<<"Enter minutes: ";
  cin>> minutes;
 
 int  m_min=minutes+15;
 int  n_min=m_min-60;
 int  hour=hours+1;
 int  m_hour=hour-24;
   if(m_min<=59)
  {
    cout<<"Time is "<<hours<<":"<<m_min<< endl;
   }

   if(hour>=24)
    {
    cout<<"time is: "<< m_hour <<":"<<n_min<< endl;
    return 0;
    }


   if(m_min>=60)
  {
   cout<<"time is: "<< hour <<":"<<n_min<< endl;
  }


}

  