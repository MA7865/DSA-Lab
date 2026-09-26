    ////////////////////////////////////////////////
   //          Maryam Amir                       //
  //          550843                            //
 //          BSCS 15D                          //
////////////////////////////////////////////////
/*
Task 5  Checking whether a record exists
Initialize a student pointer to nullptr. Write void displayIfExists(const Student* s) to display a record if it exists or print "No record available" otherwise. Call it before allocation, after allocating and entering a record, and after deleting the record and resetting the pointer to nullptr.
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
//func to diaplay student details
void displayStudent(const Student* s) {
    cout << "\nSTUDENT DETAILS\n";
    cout << "Roll Number : " << s->roll_number << "\n";
    cout << "Full Name   : " << s->name << "\n";
    cout << "Marks       : " << s->marks << "\n";
}
//func to check ptr
void displayIfExists(const Student* s) {
    if (s != nullptr) {
        displayStudent(s);
    }
    else {
        cout << "No record available" << endl;
    }
}
int main(){
    //no rec present initially
    Student* ptr = nullptr;
    cout<<"before allocation:\n";
    displayIfExists(ptr);
    //allocate a rec to tht ptr
    ptr = new Student;
    //enter rec
    cout<<"\nEnter roll number: ";
    cin>>ptr->roll_number;
    cout<<"Enter name: ";
    cin>>ptr->name;
    cout<<"Enter marks: ";
    cin>>ptr->marks;
    //checking ptr
    cout << "\nAfter allocation:\n";
    displayIfExists(ptr);
    //delete record
    delete ptr;
    ptr = nullptr;
    //check ptr
    cout << "\nAfter deletion:\n";
    displayIfExists(ptr);
    return 0;
}