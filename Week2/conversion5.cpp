#include <iostream>
using namespace std;
main(){
  
double bits;

cout<< "enter bits: ";
cin>> bits;  
 
float bytes=bits/8;

cout<<bits << "  bits in bytes are: " << bytes << endl;

double kilobytes= bits/ (1024*8) ;

cout<<bits << "  bits in kilobytes are: " << kilobytes << endl;

double megabytes= bits/ (1024*1024*8) ;

cout<<bits << "  bits in megabytes are: " << megabytes;
 
}