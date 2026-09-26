    ////////////////////////////////////////////////
   //          Maryam Amir                       //
  //          550843                            //
 //          BSCS 15D                          //
////////////////////////////////////////////////
/*
Task 2  Accessing a structure through a pointer
Create a pointer to a student variable. Input the record, then use the arrow operator (->) to display its details, update its marks with a new value entered by the user, and display the updated record.
*/
#include <iostream>
#include <string>
using namespace std;
//student structure
struct Student {
    string name;
    int roll_number;
    double marks;
};
int main(){
    Student s; //defining student var
    //pointer pointing to student var
    Student* ptr = &s;
    //enter record
    cout <<"Enter roll number: ";
    cin >> ptr->roll_number;
    cout <<"Enter name: ";
    cin >> ptr->name;
    cout << "Enter marks: ";
    cin >> ptr->marks;
    //display record using ptr
    cout<<"\nSTUDENT DETAILS\n";
    cout << "Roll Number : " << ptr->roll_number << "\n";
    cout << "Full Name   : " << ptr->name << "\n";
    cout << "Marks       : " << ptr->marks << "\n";
    //update new marks
    double newMarks;
    cout<<"Enter new marks: ";
    cin>>newMarks;
    ptr->marks = newMarks;
    //display updated record
    cout << "\nUPDATED STUDENT DETAILS\n";
    cout << "Roll Number : " << ptr->roll_number << "\n";
    cout << "Full Name   : " << ptr->name << "\n";
    cout << "Marks       : " << ptr->marks << "\n";
    return 0;
}

