    ////////////////////////////////////////////////
   //          Maryam Amir                       //
  //          550843                            //
 //          BSCS 15D                          //
////////////////////////////////////////////////
/*
Task 3  Creating a record dynamically
Allocate one Student record using new. Input and display its details through the pointer. Release the allocated memory using delete and set the pointer to nullptr.
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
    //dynamic allocate 
    Student* ptr = new Student;
    //enter rec
    cout<<"Enter roll number: ";
    cin>>ptr->roll_number;
    cout<<"Enter name: ";
    cin>>ptr->name;
    cout<<"Enter marks: ";
    cin>>ptr->marks;
    //display rec
    cout << "\nSTUDENT DETAILS\n";
    cout << "Roll Number : " << ptr->roll_number << "\n";
    cout << "Name   : " << ptr->name << "\n";
    cout << "Marks       : " << ptr->marks << "\n";
    //release ptr
    delete ptr;
    ptr = nullptr;
    return 0;
}
