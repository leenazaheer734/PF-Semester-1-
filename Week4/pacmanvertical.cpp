#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int x, int y);
void movecharacter(int x, int y);
main()
{
   system("cls");
    printmaze();

  int x=24;
  int y=10;
  while(true)
 {
    movecharacter( x, y);
     if(y<18)
    {
      y=y+1;
    }
   if(y==18)
   {
     gotoxy(x,y-1);
     cout<<"  ";
     y=10;
     }

}

}
void printmaze()
{

cout<<"   ###################################################    "<< endl;
cout<<"   !!    ...........    |+|     ................... !!    "<< endl;
cout<<"   !!      +++++++++    |+|                    |+|  !!    "<< endl;   
cout<<"   !!     .|+|                ++++++++++  ..   |+|  !!    "<< endl; 
cout<<"   !!.    .|+|               |+|      |+| ..   |+|  !!      "<< endl;
cout<<"   !!.    .++++++++       .  |+|++++++|+| ..   |+|  !!      "<< endl;
cout<<"   !!.                 |+|.                    |+|  !!      "<< endl;
cout<<"   !!.|+|     .........|+|.    |+|.....   +++++|+|  !!      "<< endl;
cout<<"   !!.|+|    ++++++++++|+|.    |+|.....             !!        "<< endl;
cout<<"   !!.|+|                 .    |+|.....    |+|..    !!        "<< endl;
cout<<"   !!.|+|+++++++               |+|++++++   |+|..    !!        "<< endl;
cout<<"   !!.        |+|         |+|...           |+|..    !!        "<< endl;
cout<<"   !!.        |+|         |+|...                    !!        "<< endl;
cout<<"   !!         |+|++++++   |+|...    ++++++++++++++  !!        "<< endl;
cout<<"   !!  .......|+|         |+|...              .|+|  !!        "<< endl;
cout<<"   !!    ++++++++         |+|...              .|+|  !!        "<< endl;
cout<<"   !!                           |+|++++++++++ .|+|  !!        "<< endl;
cout<<"   !!    |+|.  |+|.....         |+|.......    .|+|  !!        "<< endl;
cout<<"   !!    |+|.  |+|++++++++      |+|     |+|   .|+|  !!        "<< endl;
cout<<"   !!    |+|.                   |+|     |+|   .|+|  !!        "<< endl;
cout<<"   !!    |+|.          +++++++++|+|     |+|   .     !!        "<< endl;
cout<<"   !! ...............................               !!        "<< endl;
cout<<"   ###################################################        "<< endl;
}
 
void gotoxy(int x, int y)
{ 
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

}

void movecharacter(int x, int y)
{
  gotoxy(x,y-1);
   cout<<"  ";
   gotoxy(x,y);
   cout<<"G";
   Sleep(200);
}