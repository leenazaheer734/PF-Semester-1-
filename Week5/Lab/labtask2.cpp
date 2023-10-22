#include <iostream>
using namespace std;
string change(char bigsmall);
main()
{

  char bigsmall;
  cout << "Enter alphabet:";
  cin >> bigsmall;
  string output = change(bigsmall);
  cout << "alphabet is: " << output << endl;
}
string change(char bigsmall)
{
  if (bigsmall == 'a')
  {
    return "lowercase a";
  }
  if (bigsmall == 'A')
  {
    return "uppercase A";
  }
  if (bigsmall == 'b')
  {
    return "lowercase b";
  }
  if (bigsmall =='B')
  {
    return "uppercase B";
  }
  if (bigsmall == 'c')
  {
    return "lowercase c";
  }
  if (bigsmall =='C')
  {
    return "uppercase C";
  }
  if (bigsmall == 'd')
  {
    return "lowercase d";
  }
  if (bigsmall =='D')
  {
    return "uppercase D";
  }
  
  
  if (bigsmall == 'f')
  {
    return "lowercase f";
  }
  if (bigsmall =='F')
  {
    return "uppercase F";
  }
  if (bigsmall == 'g')
  {
    return "lowercase g";
  }
  if (bigsmall =='H')
  {
    return "uppercase H";
  }
  if (bigsmall == 'i')
  {
    return "lowercase i";
  }
  if (bigsmall =='I')
  {
    return "uppercase I";
  }
  
  if (bigsmall == 'j')
  {
    return "lowercase j";
  }
  if (bigsmall =='J')
  {
    return "uppercase J";
  }
  if (bigsmall == 'k')
  {
    return "lowercase k";
  }
  if (bigsmall =='K')
  {
    return "uppercase K";
  }
  if (bigsmall == 'l')
  {
    return "lowercase l";
  }
  if (bigsmall =='L')
  {
    return "uppercase L";
  }
  if (bigsmall == 'm')
  {
    return "lowercase m";
  }
  if (bigsmall =='M')
  {
    return "uppercase M";
  }
  if (bigsmall == 'n')
  {
    return "lowercase n";
  }
  if (bigsmall =='N')
  {
    return "uppercase N";
  }
  if (bigsmall == 'o')
  {
    return "lowercase o";
  }
  if (bigsmall =='O')
  {
    return "uppercase O";
  }
  if (bigsmall == 'p')
  {
    return "lowercase p";
  }
  if (bigsmall =='P')
  {
    return "uppercase P";
  }
  if (bigsmall == 'q')
  {
    return "lowercase q";
  }
  if (bigsmall =='Q')
  {
    return "uppercase Q";
  }
  if (bigsmall == 'r')
  {
    return "lowercase r";
  }
  if (bigsmall =='R')
  {
    return "uppercase R";
  }
  
}
