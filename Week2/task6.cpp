#include <iostream>
using namespace std;
main(){
 
int megabytes;

cout<< "Enter megabytes:";
cin>> megabytes;

int bits= megabytes*1024*1024*8 ;

cout<< megabytes << " megabytes in bits are: " << bits;

}