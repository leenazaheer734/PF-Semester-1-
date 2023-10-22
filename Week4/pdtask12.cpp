#include <iostream>
using namespace std;
void flowers(int redrose, int whiterose, int tulips);


main()
{
  int redrose, whiterose, tulips;  

 while(true)
{
 
  cout<< "Enter amount of red roses: ";
  cin>> redrose;
  cout<< "Enter amount of white roses: ";
  cin>> whiterose;
  cout<<"Enter amount of tulips: ";
  cin>>  tulips;
 flowers(redrose, whiterose, tulips);

}

}

void flowers(int redrose, int whiterose, int tulips)
{
   float   prredrose=2.00;
   float prwhiterose=4.10;
   float    prtulips=2.50;
   float   totalbill=(redrose*prredrose)+(whiterose*prwhiterose)+(tulips*prtulips);
   float    discount=totalbill-(totalbill*0.2);
   if (totalbill > 200)
  {
     cout<<"your totalbill is:" <<totalbill << endl;
     cout<< "your payable amount after discount is: "<<discount<< endl;
  }

  if (totalbill <= 200)
  {
    
  cout<< "your bill is: "<< totalbill<< endl;
  }
   
}
 
