#include <iostream>
#include <cmath>
using namespace std;


main()
{

  int vol, flowrate1, flowrate2, percent1, percent2, totalflow, overflow;
  float hour, flow1, flow2, totalpercent;
  cout<<"Enter total volume of pool in liters(1...10000): ";
  cin>> vol;
  cout<<"Enter flow rate per hour from first pipe(1...5000): ";
  cin>> flowrate1;
  cout<<"Enter flow rate per hour from second pipe(1...5000): ";
  cin>> flowrate2;
  cout<<"Hours for which user is absent(1...24): ";
  cin>> hour;
  
  flow1=flowrate1*hour;
  flow2=flowrate2*hour;
  totalflow= flow1+flow2;
  percent1=(flow1*100)/totalflow;
  percent2=(flow2*100)/totalflow;
  totalpercent= (totalflow*100)/vol;
  overflow=totalflow-vol;

if(totalflow>vol)
{
  cout<<"pool has overflown for "<<hour<<" hours with "<<overflow<<" litres"<< endl;
}
   
  
if(totalflow<=vol)
{
   cout<<"The pool is "<<totalpercent<<"% full. Pipe1: [" <<percent1<< "]% .Pipe2[" <<percent2<<"] %"<< endl;
}
 

   
 
}
