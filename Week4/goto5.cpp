#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void myname();

main()
{

 system("cls");
 
   myname();

}

void gotoxy(int x, int y)
 {
   COORD coordinates;
  coordinates.X =x;
  coordinates.Y =y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 }

void myname()
{
   gotoxy(23,10);
   cout<< "  #            #########   #########  #      #      #    ";
    gotoxy(23,11);
   cout<< "  #            #           #          # #    #    #   #   ";
    gotoxy(23,12);
   cout<< "  #            #           #          #  #   #   #     #  ";
   gotoxy(23,13);
   cout<< "  #            ######      ######     #   #  #   #     #   ";
   gotoxy(23,14);
   cout<< "  #            #           #          #    # #   #######   ";
   gotoxy(23,15);
   cout<< "  #            #           #          #     ##   #     #   ";
   gotoxy(23,16);
   cout<< "  ###########  #########   #########  #      #   #     #   ";
}
   