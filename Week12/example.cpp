#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

string usernames[100];
string passwords[100];
int usercount = 0;
string username, password;
void addUser(string username, string password);
bool signIn(string username, string password);
void viewUsers();
void storeinFile(string username, string password);
bool isValidname(string username);
int firstmenu();
void loadDatafromFile();
main()
{
    loadDatafromFile();
    system("cls");
    int option=5;
    while(option != 0)
    {
    option = firstmenu();
    if (option == 1)
    {
        system("cls");
        cout << "Enter name: ";
        cin >> username;
        cout << "Enter pasword: ";
        cin >> password;
        bool flag = isValidname(username);
        cout <<flag;
        if (flag == true)
        {
            addUser(username, password);
            storeinFile(username, password);
            cout << "Signed in successfully!"<< endl;
            cout << "Press any key to continue...";
            getch();
        }
        else if(flag == false)
        {
            cout << "invalid user!" << endl;
            cout << "Press any key to continue..."<< endl;
            getch();
        }
    }
    else if (option == 2)
    {
        system("cls");
        cout << "Enter name";
        cin >> username;
        cout << "Enter pasword:";
        cin >> password;
        bool Present = signIn(username, password);
        if(Present == true)
        {
            cout<<"invalid credentials!";
            getch();
        }
        else
        {
            cout <<"Login succesfully";
            getch();
        }
    
    }
    else if(option == 3)
    {
        system("cls");
        viewUsers();
        getch();
    }
    }
}


void addUser(string username, string password)
{
    usernames[usercount] = username;
    passwords[usercount] = password;
    usercount++;
}
void storeinFile(string username, string password)
{
    fstream myFile;
    myFile.open("users.txt", ios::out);
    myFile << username << endl;
    myFile << password << endl;
    myFile.close();
}
void viewUsers()
{
    cout << "username"<<"\t"<<"passwords"<< endl;
    for (int index = 0; index < usercount; index++)
    {
        cout << usernames[index] << "\t\t" << passwords[index] << endl;
    }
}
bool signIn(string username, string password)
{
    bool isPresent = false;
    for (int idx = 0; idx < usercount; idx++)
    {
        if (usernames[idx] == username && passwords[idx] == password)
        {
            isPresent = true;
            break;
        }
    }
    return isPresent;
}
bool isValidname(string username)
{
    bool isunique = true;
    for (int idx = 0; idx < usercount; idx++)
    {
        if (usernames[idx] == username)
        {
            isunique = false;
            break;
        }
    }
    return isunique;
}
int firstmenu()
{
    int choice;
    cout << "ENter an option: " << endl;
    cout << "1. Sign up " << endl;
    cout << "2. Sign in" << endl;
    cout << "3. View all users" << endl;
    cout << "0. Exit" << endl;
    cin >> choice;
    return choice;
}
void loadDatafromFile()
{
    string username, password;
    fstream myFile;
    myFile .open("users.txt", ios::in);
    while(getline(myFile,username)  &&  getline(myFile, password) )
    {
        usernames[usercount] = username;
        passwords[usercount] = password;
        usercount++;
    }
}