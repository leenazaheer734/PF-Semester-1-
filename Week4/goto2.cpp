#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printmaze();


main()
{
  system("cls");
  printmaze();
 }


void gotoxy(int x, int y)
 {
   COORD coordinates;
  coordinates.X =x;
  coordinates.Y =y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
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