#include <iostream>
using namespace std;
main(){

int numone, numtwo, numthree, numfour, numfive, numsix;
int numseven, numeight, numnine, numten, numeleven, numtwelve, numthirteen, numfourteen, numfifteen;
int multiply, add, sub, final;

cout<< "enter 1st number: ";
cin>> numone;

cout<< "enter 2nd number: ";
cin>> numtwo;

cout<< "enter 3rd number: ";
cin>> numthree;

cout<< "enter 4th number: ";
cin>> numfour;

cout<< "enter 5th number: ";
cin>> numfive;

cout<< "enter 6th number: ";
cin>> numsix;

cout<< "enter 7th number: ";
cin>> numseven;

cout<< "enter 8th number: ";
cin>> numeight;

cout<< "enter 9th number: ";
cin>> numnine;

cout<< "enter 10th number: ";
cin>> numten;

cout<< "enter 11th number: ";
cin>> numeleven;

cout<< "enter 12th number: ";
cin>> numtwelve;

cout<< "enter 13th number: ";
cin>> numthirteen;

cout<< "enter 14th number: ";
cin>> numfourteen;

cout<< "enter 15th number: ";
cin>> numfifteen;

add= numone+numtwo+numthree+numfour+numfive;
multiply= numsix*numseven*numeight*numnine*numten;
sub= numeleven-numtwelve-numthirteen-numfourteen-numfifteen;

final= (add+multiply)-sub;

cout<< "toatl is: " << final;


}

