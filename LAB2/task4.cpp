/*
1.	A teacher records marks for a group whose number of students and number of subjects are entered at runtime. Each row represents a student and each column a subject.
2.	Read and validate rows and cols before allocation. Allocate an int** marks array of row pointers, then allocate cols integers for each row.
3.	Read marks from 0 to 100 and display the matrix. Assume entered marks are valid. Use *(*(marks + r) + c) in at least one complete input or output loop.
4.	Calculate each student’s total. Display the student with the highest total and that total. If totals tie, report the first student. Use student numbers starting at 1.
5.	Delete all rows, then delete the row-pointer array and set marks to nullptr. Explain what would remain allocated if only delete[] marks; were executed.
6.	For two students and three subjects, sketch the pointer variable, the array of two row pointers and the two separately allocated rows. Label marks, marks[0] and marks[0][0].
*/
#include <iostream>
using namespace std;
int main(){
    int rows, cols;
    //entering number of students and subjects
    cout<<"Enter number of students: ";
    cin>>rows;
    cout<<"Enter number of subjects: ";
    cin>>cols;
    //validate rows and cols
    if (rows <= 0 || cols <= 0) {
        cout << "Error" << endl;
        return 0;
    }
    //allocate array of row ptrs
    int** marks = new int*[rows];
    //allocate each row tot its col
    for (int r=0;r<rows;r++){
        *(marks + r)= new int[cols];
    }
    //input marks
    cout<<"Marks:\n";
    for (int r=0;r<rows;r++){
        cout<<"Student "<<r+1<<": ";
        for (int c=0;c<cols;c++){
            cin>>*(*(marks + r) + c);
        }
        cout<<endl;
    }
    //highest total
    int bestTotal=0;
    int bestStudent=1;
    //first students total
    for (int c=0;c<cols;c++){
        bestTotal+=*(*(marks + 0) + c);
    }
    //remaining students
    for (int r=1;r<rows;r++){
        int total=0;
        for (int c=0;c<cols;c++){
            total+=*(*(marks + r) + c);
        }
        if (total>bestTotal){
            bestTotal=total;
            bestStudent=r+1;
        }
    }
    //display each student's total
    cout <<"Students total:\n";
    for (int r=0;r<rows;r++){
        int total = 0;
        for (int c=0;c<cols;c++){
            total+=*(*(marks + r) + c);
        }
        cout << "Student " << r+1 << ": " << total << endl;
    }
    //best studnet
    cout<<"Top student: "<<bestStudent<<endl;
    cout<<"Highest total: "<<bestTotal<<endl;
    //need to delete each row
    for (int r=0;r<rows;r++){
        delete[] *(marks + r);
    }
    //delete the row-pointer array
    delete[] marks;
    marks = nullptr;//reset ptr
    return 0;
}