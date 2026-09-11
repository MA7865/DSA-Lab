#include <iostream>
using namespace std;
//student class
class Student {
public:
    int rollNumber;
    int marks;
    //to print student's details
    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    //creating two obj of students
    Student s1;
    Student s2;
    //assigning values to both obj
    s1.rollNumber = 1;
    s1.marks = 75;
    s2.rollNumber = 2;
    s2.marks = 90;
    //display both obj
    s1.display();
    s2.display();
    //changing only s1.marks
    s1.marks = 80;
    cout << "\nAfter changing s1.marks:\n";
    //printing it again
    s1.display();
    s2.display();
    return 0;
}