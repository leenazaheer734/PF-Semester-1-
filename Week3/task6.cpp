#include <iostream>
using namespace std;

void costing(int sizeinpounds,int costofbag, int areacovered);

main(){

int sizeinpounds, areacovered;
float costofbag, costperpound,costpersqfoot;
while (true)
 {
  cout<< "Enter size of fertilizer bag in pounds: ";
  cin>> sizeinpounds;

  cout<< "Enter the cost of bag: ";
  cin>> costofbag;

  cout<< "Enter area covered by bag in square feet: ";
  cin>> areacovered;

  costing(sizeinpounds,costofbag, areacovered);
 }
}

void costing(int sizeinpounds,int costofbag, int areacovered)
 {

  int costperpound= costofbag/ sizeinpounds;
  int costpersqfoot= costofbag/ areacovered;

cout<<"_________________________________________________"<< endl;
cout<< "Cost of fertilizerper pound: " << costperpound<< endl;

cout<< "Cost of fertilizing area per square feet: " << costpersqfoot<< endl;




 }