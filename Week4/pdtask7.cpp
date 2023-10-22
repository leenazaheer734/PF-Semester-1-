#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printmaze();
void moveposition(int x,int y);

main()
{

   system("cls");
  printmaze();

   int x=20;
   int y=4;
while(true)
{
 moveposition(x,y);
    if(y < 10)
   {
     y=y+1;
   }
    if(y == 10)
    {
      gotoxy(x,y-1);
     cout<<" ";
     y=4;
     
    }


  }
}


void gotoxy(int x, int y)
{

  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

} 
void printmaze()
{
 cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$                                             $"<< endl;
 cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<< endl;

}

void moveposition(int x,int y)
{

   gotoxy(x,y-1);
   cout<< "  ";
   gotoxy(x,y);
   cout<<"G";
   Sleep(250);
}

