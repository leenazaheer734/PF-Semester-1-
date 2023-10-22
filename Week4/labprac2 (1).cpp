#include <iostream>
using namespace std;
 void showresult(int marks);

main()
{
  int marks;  
 
   while(true)
 {
 
  cout<< "Enter your marks out of 100: ";
  cin>> marks;

  showresult(marks);
 }

}


 void showresult(int marks)
{
   if(marks == 50)
   {
      cout<< "mehnat karo"<< endl;
   }

  if(marks > 50)
  {
   cout<< "PASS"<< endl;
  }


  if(marks < 50)
  {
   cout<< "FAIL" << endl;
  }
}