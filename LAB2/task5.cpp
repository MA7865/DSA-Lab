/*
A new student joins after the marks have been entered. Write a separate program that reads n (1–10), allocates n marks and then stores one additional mark.
1. Allocate a second block of n + 1 integers. Copy the original n values into it using pointer notation. Read the new mark into the final position.
2. Release the old block. Make the original pointer refer to the new block, update the stored size, and display all values.
3. Release the final block exactly once. Explain why changing n alone does not increase the old block’s capacity.
Check: n = 3; marks 45 60 75; new mark 90 → 45 60 75 90. Also test n = 1; mark 0; new mark 100 → 0 100.
Hint: allocate → copy → append → delete old block → update pointer and size. Other pointers to the old block then become dangling.
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    //reading in n
    cout<<" enter num of marks: ";
    cin >>n;
    //validating n
    if (n<1 || n>10){
        cout<<"Error"<<endl;
        return 0;
    }
    //allocating n marks
    int* marks = new int[n];
    //inputing marks
    cout<<"Enter marks: ";
    for (int i=0;i<n;i++){
        cin>>*(marks+i);
    }
    //new marks
    int newMark;
    cout<<"Enter new mark: ";
    cin>>newMark;
    //alloacting a larger block to accomodate the new mark
    int* newMarks = new int[n+1];
    //copying old val
    for (int i=0;i<n;i++){
        *(newMarks+i)=*(marks+i);
    }
    //adding new marks
    *(newMarks+n)= newMark;
    //releasing prev block
    delete[] marks;
    //updating pointer and size
    marks = newMarks;
    n++;
    //displaying all val
    cout<<"Marks: ";
    for (int i=0;i<n;i++){
        cout<<*(marks+i)<<" ";
    }
    cout<<endl;
    //releasing final block
    delete[] marks;
    marks = nullptr; //need to avoid dangling ptr
    return 0;

}