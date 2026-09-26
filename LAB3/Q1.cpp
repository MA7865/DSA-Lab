    ////////////////////////////////////////////////
   //          Maryam Amir                       //
  //          550843                            //
 //          BSCS 15D                          //
////////////////////////////////////////////////
/*
Task 1  Creating a structure
Define the Student structure. Declare one student variable, input its roll number, full name, and marks, and display all details with clear labels.
*/
#include <iostream>
#include <string>
using namespace std;
struct Student{ //defining student structure
    string name;
    int roll_number;
    double marks;
};
int main(){
    //declaring student var
    Student s;
    //inputting details
    cout<<"Enter roll number: ";
    cin >> s.roll_number;
    cout<<"Enter full name: ";
    cin >> s.name;
    cout <<"Enter marks: ";
    cin>> s.marks;
    cout<<endl;
    //displaying student details
    cout << "STUDENT DETAILS\n";
    cout << "Roll Number : " << s.roll_number << "\n";
    cout << "Full Name   : " << s.name << "\n";
    cout << "Marks       : " << s.marks << "\n";
    return 0;
}