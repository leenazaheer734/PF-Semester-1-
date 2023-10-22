#include <iostream>
using namespace std;
void tickets(string country, int ticketprice);

main()
{
  string country;
  int ticketprice;

 while(true)
{
 
  cout<<"Enter name of country where you want to go: ";
  cin>> country;
  cout<<"Enter price of ticket: ";
  cin>> ticketprice;

  tickets(country, ticketprice);

}



}


void tickets(string country, int ticketprice)
{
   float    pakdis=ticketprice*0.05;
   float  pakprice=ticketprice-pakdis;
   float    iredis=ticketprice*0.1;
   float  ireprice=ticketprice-iredis;
   float    inddis=ticketprice*0.2;
   float  indprice=ticketprice-inddis;
   float    engdis=ticketprice*0.3;
   float  engprice=ticketprice-engdis;
   float    candis=ticketprice*.45;
   float candprice=ticketprice-candis;


  if(country == "pakistan")
{
   cout<<" your final ticket price is: " <<pakprice<< endl;
}

  if(country == "ireland")
{
   cout<<" your final ticket price is: " <<ireprice<< endl;
}

  if(country == "india")
{
   cout<<" your final ticket price is: " <<indprice<< endl;
}

  if(country == "england")
{
   cout<<" your final ticket price is: " <<engprice<< endl;
}

  if(country == "canada")
{
   cout<<" your final ticket price is: " <<candprice<< endl;
}

}