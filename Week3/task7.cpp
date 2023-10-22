#include <iostream>
using namespace std;
void discount( int adultticketprice, int childticketprice, int adticketsold, int chticketsold, int percenttodonate);
main(){

string movie;
int adultticketprice, childticketprice, adticketsold, chticketsold, percenttodonate;

while(true)
 {

 cout<< "Enter movie name: ";
 cin>> movie;

 cout<< "Enter price of one adult ticket: ";
 cin>> adultticketprice;
 
 cout<< "Enter price of one child ticket price: ";
 cin>> childticketprice;

 cout<< "Enter number of adult ticket sold: ";
 cin>> adticketsold;
 
 cout<< "Enter number of child ticket sold: ";
 cin>> chticketsold;

 cout<< "percentage of amount u want to donate: ";
 cin>> percenttodonate;

   discount( adultticketprice, childticketprice, adticketsold,  chticketsold,  percenttodonate);
}

}
void discount( int adultticketprice, int childticketprice, int adticketsold, int chticketsold, int percenttodonate)
{
int earnedmoney= (adultticketprice*adticketsold)+(childticketprice*chticketsold);

int donatedmoney= (earnedmoney*percenttodonate)/100;

int remainingmoney= earnedmoney-donatedmoney;
cout<< "______________________________________________________________________"<< endl;
cout<< "total amount genrated is: " << earnedmoney;
cout<< endl;
cout<< "Remaining money after donating " << percenttodonate << " percent to charity is: "<< remainingmoney<< endl<< endl;


}