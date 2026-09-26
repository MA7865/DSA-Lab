    ////////////////////////////////////////////////
   //          Maryam Amir                       //
  //          550843                            //
 //          BSCS 15D                          //
////////////////////////////////////////////////
/*
Task 4  Using functions with pointers
Create and input a dynamically allocated student record. Implement the following functions. In main(), display the record, update its marks, and display it again. Release the memory before the program ends.
void displayStudent(const Student* s);
void updateMarks(Student* s, float newMarks);
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
//func to display student
void displayStudent(const Student* s) {
    cout << "\nSTUDENT DETAILS\n";
    cout << "Roll Number : " << s->roll_number << "\n";
    cout << "Full Name   : " << s->name << "\n";
    cout << "Marks       : " << s->marks << "\n";
}
//func to update marks
void updateMarks(Student* s, float newMarks) {
    s->marks = newMarks;
}
int main(){
    //dynamic student var
    Student* ptr = new Student;
    //enter rec
    cout<<"Enter roll number: ";
    cin>>ptr->roll_number;
    cout << "Enter name: ";
    cin>> ptr->name;
    cout << "Enter marks: ";
    cin >> ptr->marks;
    //display rec
    displayStudent(ptr);
    //update marks
    float newMarks;
    cout<<"\nEnter new marks: ";
    cin>>newMarks;
    updateMarks(ptr, newMarks);
    //display update new rec
    displayStudent(ptr);
    //release ptr
    delete ptr;
    ptr = nullptr;
    return 0;
}