#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
void printSeats(char planeSeats[13][6]);
void inputSeat(char &seatType, string &seatPosition);
void checkSeat(string &seatPosition, int &row, int &col, char planeSeats[][6], char seatType);
string findSeat(int &row, int &col, char planeSeats[][6]);
void saveinFile(char planeSeats[][6]);
void loadfromFile(char planeSeats[][6]);
bool matchseat(int &row, char seatType);
void resetplane(char planeSeats[][6]);
main()
{
    int row, col;
    char seatType;
    string seatPosition;
    char planeSeats[13][6] = {{'*', '*', 'X', '*', 'X', 'X'},
                              {'*', 'X', '*', 'X', '*', 'X'},
                              {'*', '*', 'X', 'X', '*', 'X'},
                              {'X', '*', 'X', '*', 'X', 'X'},
                              {'*', 'X', '*', 'X', '*', '*'},
                              {'*', 'X', '*', '*', '*', 'X'},
                              {'X', '*', '*', '*', 'X', 'X'},
                              {'*', 'X', '*', 'X', 'X', '*'},
                              {'X', '*', 'X', 'X', '*', 'X'},
                              {'*', 'X', '*', 'X', 'X', 'X'},
                              {'*', '*', 'X', '*', 'X', '*'},
                              {'*', '*', 'X', 'X', '*', 'X'},
                              {'*', '*', '*', '*', 'X', '*'}};
    loadfromFile(planeSeats);
    string option = "0";
    while (option != "4")
    {
        system("cls");
        cout << endl;
        cout << "  1. View Seats" << endl;
        cout << "  2. Reserve a seat" << endl;
        cout << "  3. Reset seating plan" << endl;
        cout << "  4. Exit" << endl;
        cin >> option;
        system("cls");
        if (option == "1")
        {
            printSeats(planeSeats);
            cout << endl;
        }
        if (option == "2")
        {
            printSeats(planeSeats);
            inputSeat(seatType, seatPosition);
            checkSeat(seatPosition, row, col, planeSeats, seatType);
        }
        if (option == "3")
        {
            resetplane(planeSeats);
            printSeats(planeSeats);
        }
        if (option == "4")
        {
            break;
        }
        saveinFile(planeSeats);
        cout << "  Press any key to continue..";
        getch();
    }
}

void printSeats(char planeSeats[13][6])
{
    cout << "\t"
         << "Following are seats available: " << endl;
    cout << endl;
    cout << "\t"
         << "A"
         << "\t"
         << "B"
         << "\t"
         << "C"
         << "\t"
         << "D"
         << "\t"
         << "E"
         << "\t"
         << "F" << endl;
    cout << endl;
    for (int x = 0; x < 13; x++)
    {
        cout << x + 1 << "\t";
        for (int y = 0; y < 6; y++)
        {
            cout << planeSeats[x][y] << "\t";
        }
        cout << endl;
    }
}

void inputSeat(char &seatType, string &seatPosition)
{
    cout << endl;
    cout << "  Enter seat type(F: firstclass/  B: bisinessclass/ E:economyclass):   ";
    cin >> seatType;
    cout << "  Enter seat Position(eg. A2):  ";
    cin >> seatPosition;
}

void checkSeat(string &seatPosition, int &row, int &col, char planeSeats[][6], char seatType)
{
    char rows1;
    char cols = seatPosition[0];
    char rows = seatPosition[1];
    if (seatPosition.length() == 3)
    {
        rows1 = seatPosition[2];
        row = ((int(rows) - '0') * 10) + (int(rows1) - '0') - 1;
    }
    else if (seatPosition.length() == 2)
    {
        row = (int(rows) - '0') - 1;
    }
    if (cols == 'A')
    {
        col = 0;
    }
    else if (cols == 'B')
    {
        col = 1;
    }
    else if (cols == 'C')
    {
        col = 2;
    }
    else if (cols == 'D')
    {
        col = 3;
    }
    else if (cols == 'E')
    {
        col = 4;
    }
    else if (cols == 'F')
    {
        col = 5;
    }

    bool flag = matchseat(row, seatType);
    if (flag == true)
    {
        string result = findSeat(row, col, planeSeats);
        cout << "   " << result << endl;
    }
    else
    {
        cout << "   Invalid seat enetered" << endl;
    }
}
bool matchseat(int &row, char seatType)
{
    if ((seatType == 'F' && (row >= 1 && row <= 2)) || (seatType == 'B' && (row >= 3 && row <= 7)) || (seatType == 'E' && (row >= 8 && row <= 13)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
string findSeat(int &row, int &col, char planeSeats[][6])
{
    string result;
    for (int x = 0; x < 13; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            if (row == x && col == y)
            {
                if (planeSeats[x][y] == '*')
                {
                    result = " SEAT IS RESERVED";
                    planeSeats[x][y] = 'X';
                    break;
                }
                else
                {
                    result = " Alreday reserved";
                }
            }
        }
    }
    return result;
}
void saveinFile(char planeSeats[][6])
{
    fstream planefile;
    planefile.open("plane.txt", ios::out);
    for (int x = 0; x < 13; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            planefile << planeSeats[x][y];
        }
        planefile << endl;
    }
    planefile.close();
}
void loadfromFile(char planeSeats[][6])
{
    fstream planefile;
    string line;
    int row = 0;
    planefile.open("plane.txt", ios::in);
    while (getline(planefile, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            planeSeats[row][i] = line[i];
        }
        row++;
    }
    planefile.close();
}
void resetplane(char planeSeats[][6])
{
    for (int x = 0; x < 13; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            planeSeats[x][y] = '*';
        }
    }
}