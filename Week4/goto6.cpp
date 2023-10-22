#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printa();
void printw();
void printi();
void prints();


main()
{
   system("cls");
     gotoxy(0,0);
     printa();
     
     gotoxy(0,8);
     printw();
     
     gotoxy(0,16);
     printa();
 
     gotoxy(0,26);
     printi();
 
     gotoxy(0,35);
     prints();


}



void gotoxy(int x, int y)
{
   COORD coordinates;
  coordinates.X =x;
  coordinates.Y =y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 }



void printa()
{
 
  cout<<"        #      "<< endl;
  cout<<"     ##  ##     "<< endl;
  cout<<"    ##    ##   "<< endl;
  cout<<"   ##      ##  "<< endl;
  cout<<"   ##########  "<< endl;
  cout<<"   ##      ##  "<< endl;
  cout<<"   ##      ##  "<< endl;
  cout<<"   ##      ##  "<< endl;
  cout<<"                "<< endl<< endl;

}


void printw()
{
    
  cout<<"  #         #"<< endl;
  cout<<"  #         #"<< endl;
  cout<<"  #    #    #"<< endl;
  cout<<"  #   # #   #"<< endl;
  cout<<"   # #   # #"<< endl;
  cout<<"    #     #"<< endl;


}



void printi()
{
  cout<<"    # "<< endl;
  cout<<"    # "<< endl;
  cout<<"    # "<< endl;
  cout<<"    # "<< endl;
  cout<<"    # "<< endl;
  cout<<"    # "<< endl;
}


void prints()
{
  cout<<"     # #       "<< endl;
  cout<<"   #     #    "<< endl;
  cout<<"    # #       "<< endl;
  cout<<"        #     "<< endl;
  cout<<"   #     #     "<< endl;
  cout<<"     # #    "<< endl;

 



}