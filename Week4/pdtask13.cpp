#include <iostream>
using namespace std;

main()
{
    int holidays;
    int workdaymin=63;
    int holidaymin=127;
 
  cout<<"Enter number of holidays: ";
  cin>> holidays;
   
   int workingdays=365-holidays;
   int   totalplay=(workingdays*workdaymin)+(holidays*holidaymin);

   cout<< "total play time is " <<totalplay<< " min per year"<< endl;

   int tomnorm=30000 ;
   int diffplay= tomnorm-totalplay;


   int  extraplay=totalplay-tomnorm;
   int hourplay=extraplay/60;
   int  minplay=extraplay%60;
   int lessplay=tomnorm-totalplay;
   int lesshplay=lessplay/60;
   int lessmplay=lessplay%60;
 
  if(totalplay> tomnorm)
 {
  cout<< "Tom will run away!"<< endl;
  cout<<"difference fom norm is "<< hourplay<< " hour and " << minplay<< " min for play" << endl;
 }
    
  if(totalplay<= tomnorm)
 {
  cout<<"Tom will sleep well!"<< endl;
  cout<<"difference fom norm is "<< lesshplay << " hour and " << lessmplay<< " min less for play" << endl;
  }
}

