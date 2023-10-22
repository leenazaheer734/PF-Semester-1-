#include <iostream>
using namespace std;
void printmenu();
void calculateaggregate(string name, float intermarks,float matricmarks,float ecatmarks);
void comparemarks(string name, float ecatmarks, string name2, float ecatmarks2);
main()
{  
  int choice;
   char key;
   string name, name2;
   int matricmarks, intermarks, ecatmarks, matricmarks2, intermarks2, ecatmarks2;
  system("cls");

   printmenu();
   cout<<"Enter choice: ";
   cin>> choice;

   if(choice==1)
   {
    system("cls");
    cout<< "you choose option 1"<< endl;  
    
   cout<<"Enter name of student: ";
  cin>> name;
  cout<<"Enter marks of student in matric out of 1100: ";
  cin>> matricmarks;
  cout<<"Enter marks of student in inter out of 550: ";
  cin>> intermarks;
  cout<<"Emter marks of student in ecat out of 400: ";
  cin>> ecatmarks;
  cout<<"Enter any key to continue.... ";
  cin>> key; 
  system("cls");
  printmenu();
  cout<<"Enter choice: ";
   cin>> choice;

}

  
   if(choice==2)
   {
    system("cls");
    cout<< "you choose option2: "<< endl;

  cout<<"Enter name of student: ";
  cin>> name2;
  cout<<"Enter marks of student in matric out of 1100: ";
  cin>> matricmarks2;
  cout<<"Enter marks of student in inter out of 550: ";
  cin>> intermarks2;
  cout<<"Emter marks of student in ecat out of 400: ";
  cin>> ecatmarks2;
  cout<< "press any key to continue..... ";
  cin>> key;
  system("cls");
  printmenu();
  cout<<"Enter choice: ";
   cin>> choice;
   
   } 


   if(choice==3)
  {
    system("cls");
   calculateaggregate( name, intermarks, matricmarks, ecatmarks);
   cout<<"press any key to continue.... ";
   cin>> key;
   system ("cls");
   printmenu();
   cout<<"Enter choice: ";
   cin>> choice;

  }
  


  if(choice==4)
 {
   system("cls");
  calculateaggregate( name2, intermarks2, matricmarks2, ecatmarks2);
  cout<<"press anykey to continue.... ";
  cin>> key;
   system("cls");
    printmenu();
    cout<<"Enter choice: ";
   cin>> choice;
  }
 
   if(choice==5)
 {
   system("cls");
   comparemarks(name, ecatmarks, name2, ecatmarks2);
   cout<< "press any key to continue... ";
   cin>> key;
  }
}



void printmenu()
{

 cout<<"************************************"<< endl;
 cout<<"*                                  *"<< endl;
 cout<<"*       $University Admission$     *"<< endl;
 cout<<"*         $Mangement System$       *"<< endl;
 cout<<"*                                  *"<< endl;
 cout<<"************************************"<< endl;

   int choice;
  cout<<"Welcome to UET Lahore Admission Management system! "<< endl<< endl<< endl;
  cout<<"Press 1 to enter details of First Student! "<< endl;
  cout<<"Press 2 to enter details of Second Student!"<< endl;
  cout<<"Press 3 to calculate aggregate of first student!"<< endl;
  cout<<"Press 4 to calculate aggregate of second student!"<< endl;
  cout<<"Press 5 to find student with roll number 01!" << endl;
  
}   

void calculateaggregate(string name, float intermarks,float matricmarks,float ecatmarks)
{
  float interpercent, matricpercent, ecatpercent;
    interpercent=(intermarks*30)/550;
    matricpercent=(matricmarks*30)/1100;
     ecatpercent =(ecatmarks*40)/400;
   float aggregate= interpercent +matricpercent +ecatpercent;
   cout<< "aggregate of "<< name << " Is "<< aggregate<< endl;
}

void comparemarks(string name, float ecatmarks, string name2, float ecatmarks2){
    if(ecatmarks > ecatmarks2)
  {
     cout<<" roll no.1 is: "<< name << endl;
  }
   if(ecatmarks2>ecatmarks)
  {
    cout<<"roll no.1 is: "<< name2 << endl;
  }
}
   





