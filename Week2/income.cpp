#include <iostream>
using namespace std;
main(){

int workingdays;
float  exrate, dailyincome, monthlyincome, yearlyincome, taxes, incomeinusd, incomeinpkr;
float avgyearlyincome;

cout<< "Enter working days per month: ";
cin>> workingdays;

cout<< "Enter daily income in USD: ";
cin>> dailyincome;

cout<< "Enter usd to Rupees exchange rate: ";
cin>> exrate;

monthlyincome= workingdays*dailyincome ;
yearlyincome= (monthlyincome*12) + (monthlyincome*2.5);
taxes= yearlyincome*0.25;
incomeinusd= yearlyincome-taxes;
incomeinpkr= incomeinusd*exrate;
avgyearlyincome= incomeinpkr/365;

cout<< "your average yearly income in pkr is: " << avgyearlyincome;

}