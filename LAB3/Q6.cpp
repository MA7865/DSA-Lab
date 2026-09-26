    ////////////////////////////////////////////////
   //          Maryam Amir                       //
  //          550843                            //
 //          BSCS 15D                          //
////////////////////////////////////////////////
/*
Task 6  Building a student record application
Develop a menu-driven program with options to create a record, display it, update its marks, delete it, and exit. Manage only one dynamically allocated student record. Prevent creating another record while one exists. Check for an existing record before accessing or deleting it, reset the pointer after deletion, and release any remaining allocation before exiting. Repeat the menu until Exit is selected and handle invalid menu choices. Reuse your earlier functions where appropriate.
Check your application by trying Display before Create, Create twice, Update, Delete, Display after Delete, and Create followed by Exit. Verify the results during the lab; no written test report is required.
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
//display student
void displayStudent(const Student* s) {
    cout << "\nSTUDENT DETAILS\n";
    cout << "Roll Number : " << s->roll_number << "\n";
    cout << "Name   : " << s->name << "\n";
    cout << "Marks       : " << s->marks << "\n";
}
//update marks
void updateMarks(Student* s, float newMarks) {
    s->marks = newMarks;
}
//display only if record exists
void displayIfExists(const Student* s) {
    if (s != nullptr) {
        displayStudent(s);
    }
    else {
        cout << "No record available" << endl;
    }
}
int main(){
    //no rec initially
    Student* ptr = nullptr;
    int choice;//choice for menu
    do {
        //printing menu
        cout << "\n========== STUDENT RECORD SYSTEM ==========\n";
        cout << "1. Create Record\n";
        cout << "2. Display Record\n";
        cout << "3. Update Marks\n";
        cout << "4. Delete Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";//enter choice
        cin >> choice;
        switch (choice) {
            case 1://create
                if (ptr != nullptr) {
                    cout << "A record already exists." << endl;
                }
                else {
                    ptr = new Student;
                    cout << "Enter roll number: ";
                    cin >> ptr->roll_number;
                    cout << "Enter full name: ";
                    cin>> ptr->name;

                    cout << "Enter marks: ";
                    cin >> ptr->marks;
                    cout << "Record created successfully." << endl;
                }
                break;
            case 2://display
                displayIfExists(ptr);
                break;
            case 3://update
                if (ptr == nullptr) {
                    cout << "No record available." << endl;
                }
                else {
                    float newMarks;
                    cout << "Enter new marks: ";
                    cin >> newMarks;
                    updateMarks(ptr, newMarks);
                    cout << "Marks updated successfully." << endl;
                }
                break;
            case 4://delete
                if (ptr == nullptr) {
                    cout << "No record available." << endl;
                }
                else {
                    delete ptr;
                    ptr = nullptr;
                    cout << "Record deleted successfully." << endl;
                }
                break;
            case 5://exit menu
                cout << "Exiting program..." << endl;
                break;
            default://invalid choice
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    //safety check before program ends
    if (ptr != nullptr) {
        delete ptr;
        ptr = nullptr;
    }
    return 0;
}