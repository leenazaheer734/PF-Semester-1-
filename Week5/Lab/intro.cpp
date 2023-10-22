#include <iostream>
#include <conio.h>
using namespace std;

void printHeader();
void printOptions();
float calculateagg(string name, float matricMarks, float interMarks, float ecatMarks);
void compare(string name1, float ecatMarks1, string name2, float ecatMarks2);

int choice;
char key;
string name1 = "", name2 = "";
float matricMarks1 = 0, matricMarks2 = 0;
float interMarks1 = 0, interMarks2 = 0;
float ecatMarks1 = 0, ecatMarks2 = 0;

int main()
{

  while (1)
  {
    system("cls");
    printHeader();
    printOptions();

    if (choice == 1)
    {
      system("cls");
      cout << "you have selected option 1!" << endl;
      cout << "enter name of first student: ";
      cin >> name1;
      cout << "enter martic marks of first student out of 1100: ";
      cin >> matricMarks1;
      cout << "enter inter marks of first student out of 550: ";
      cin >> interMarks1;
      cout << "enter ecat marks of first student out of 400: ";
      cin >> ecatMarks1;
    }

    if (choice == 2)
    {
      system("cls");
      cout << "you have selected option 2!" << endl;
      cout << "enter name of second student: ";
      cin >> name2;
      cout << "enter martic marks of second student out of 1100: ";
      cin >> matricMarks2;
      cout << "enter inter marks of second student out of 550: ";
      cin >> interMarks2;
      cout << "enter ecat marks of second student out of 400: ";
      cin >> ecatMarks2;
    }
    if (choice == 3)
    {
      system("cls");
      cout << "You have choosed option 3!" << endl;
      float aggregate = calculateagg(name1, matricMarks1, interMarks1, ecatMarks1);
      cout << "Agggregate of first student is: " << aggregate << endl;
    }
    if (choice == 4)
    {
      system("cls");
      cout << "You have choosed option 4!" << endl;
      float aggregate = calculateagg(name2, matricMarks2, interMarks2, ecatMarks2);
      cout << "Agggregate of first student is: " << aggregate << endl;
    }
    if (choice == 5)
    {
      system("cls");
      cout << "You have choosed option 5!" << endl;
      cout << "Name"
           << "	matricMarks"
           << "	interMarks"
           << "	ecatMarks" << endl;
      cout << name1 << "	" << matricMarks1 << "		" << interMarks1 << "		" << ecatMarks1 << endl;
      cout << name2 << "	" << matricMarks2 << "		" << interMarks2 << "		" << ecatMarks2 << endl;
    }
    if (choice == 6)
    {

      system("cls");
      compare(name1, ecatMarks1, name2, ecatMarks2);
    }

    if (choice == 7)
    {
      return 0;
    }
    cout << "press any key to continue.... ";
    getch();
  }
}

void printHeader()
{
  cout << "*********************************************" << endl;
  cout << "*                                           *" << endl;
  cout << "*           $University Admission$          *" << endl;
  cout << "*            $Mangement System$             *" << endl;
  cout << "*                                           *" << endl;
  cout << "*********************************************" << endl;
}

void printOptions()
{

  cout << "Welcome to UET Lahore Admission Management system! " << endl<< endl;
  cout << "Press 1 to enter details of First Student! " << endl;
  cout << "Press 2 to enter details of Second Student!" << endl;
  cout << "Press 3 to calculate aggregate of first student!" << endl;
  cout << "Press 4 to calculate aggregate of second student!" << endl;
  cout << "Press 5 to see data of both students!" << endl;
  cout << "Press 6 to find student with roll number 01!" << endl;
  cout << "Press 7 to Exit" << endl;
  cout << "choose an option: ";
  cin >> choice;
}

float calculateagg(string name, float matricMarks, float interMarks, float ecatMarks)
{
  float aggregate = (matricMarks * 30) / 1100 + (interMarks * 30) / 550 + (ecatMarks * 40) / 400;
  return aggregate;
}

void compare(string name1, float ecatMarks1, string name2, float ecatMarks2)
{
  if (ecatMarks1 > ecatMarks2)
  {
    cout << "roll no. 1 is: " << name1 << endl;
  }
  if (ecatMarks2 > ecatMarks1)
  {
    cout << "roll no. 1 is: " << name2 << endl;
  }
}