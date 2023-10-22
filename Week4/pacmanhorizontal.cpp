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

  int x=32;
  int y=1;
  while(true)
 {
    movecharacter( x, y);
     if(x<50)
    {
      x=x+1;
    }
   if(x==50)
   {
     gotoxy(x-1,y);
     cout<<"  ";
     x=32;
    
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
  gotoxy(x-1,y);
   cout<<"  ";
   gotoxy(x,y);
   cout<<"G";
   Sleep(200);
}

    