#include <iostream>
using namespace std;
void currency(float vegpricekg, int kgveg, float fruitpricekg, int kgfruits);

main(){

int kgveg, kgfruits;
float vegpricekg, fruitpricekg, totalincoins, totalinrupees;
  while (true)
 {
cout<< "Enter vegetable price per kilogram: ";
cin>> vegpricekg;

cout<< "Enter total kg of vegetables: ";
cin>> kgveg;

cout<< "Enter fruits price per kilogram: ";
cin>> fruitpricekg;

cout<< "Enter total kg of fruits: ";
cin>> kgfruits;
 currency(vegpricekg, kgveg, fruitpricekg, kgfruits);
 
 }

}
  
  void currency(float vegpricekg, int kgveg, float fruitpricekg, int kgfruits)
 {
  int totalincoins= (vegpricekg*kgveg)+(fruitpricekg*kgfruits);
   int totalinrupees= totalincoins/1.94;

  cout<<"total in rupees: " << totalinrupees<< endl<< endl;

 }