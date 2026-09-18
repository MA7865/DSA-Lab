/*
A teacher does not know the number of students until the program runs. Store one integer mark for each student.
1. Read and validate n, then allocate int* marks = new int[n];. Read n marks from 0 to 100 using *(marks + i). You may assume the entered marks are in this range.
2. Use pointer notation to display the marks, calculate their total and average, and count marks greater than or equal to 50. Display the average without losing its fractional part.
3. Release the array with delete[] and set marks to nullptr. Explain why the pointer variable and the allocated elements are different objects.
4. Explain why entering n at runtime works with new int[n], while int marks[n]; is not a standard C++ fixed-size array declaration when n is a runtime variable.
*/
#include <iostream>
using namespace std;
int main(){
    int n; //size of array
    cout << "Enter the number of students: ";
    cin >> n;
    //validation
    if (n <= 0) {
        cout << "Error" << endl;
        return 0;
    }
    //inistializeing dynamic array
    int* marks = new int[n];
    //read marks
    cout << "Enter marks for " << n << " students (0-100): ";
    for (int i = 0; i < n; i++) {
        cin >> *(marks + i);
    }
    //dipalying marks and their total
    int total = 0;
    int pass=0;
    cout << "Marks: ";
    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
        total += *(marks + i);
        if (*(marks + i) >= 50) {
            pass++;
        }
    }
    double avg = total/n;
    cout << "\nTotal: " << total << endl;
    cout << "Average: " << avg << endl;
    cout << "Pass count: " << pass << endl;
    //releasing memory
    delete[] marks;
    marks = nullptr;
    return 0;
}