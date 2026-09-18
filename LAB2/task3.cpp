/*
A shop records sales for two branches across three days. Use int sales[2][3]; and int (*rowPtr)[3] = sales;. Rows represent branches; columns represent days.
1. Use nested loops and *(*(rowPtr + r) + c) to read and display the six non-negative values in a two-row table.
2. Calculate and display the total for each branch and the total for each day. Use the same pointer notation when reading elements for the calculations.
3. Explain what rowPtr + 1 points to and why its step differs from the step of an int* pointing to one integer. Why should int** p = sales; not be used?
*/
#include <iostream>
using namespace std;
int main(){
    //setting upt 2d array
    int sales[2][3];
    int (*rowPtr)[3] = sales;
    //read values
    for(int r=0;r<2;r++){
        cout<<"Branch "<<r+1<<": ";
        for(int c=0;c<3;c++){
            cin>>*(*(rowPtr + r) + c);
        }
    }
    //display values
    cout<<"\nSales Table:\n";
    for (int r = 0; r<2;r++){
        for (int c=0;c<3;c++){
            cout<<*(*(rowPtr + r) + c)<<"\t";
        }
        cout<<endl;
    }
    //total for each branch
    cout <<"Branch totals:\n";
    for(int r=0;r<2;r++){
        int branchTotal=0;
        for(int c=0;c<3;c++){
            branchTotal+=*(*(rowPtr + r) + c);
        }
        cout<<"Branch "<<r+1<<": "<<branchTotal<<endl;
    }
    //day totals
    cout<<"Day totals:\n";
    for(int c=0;c<3;c++){
        int dayTotal=0;
        for(int r=0;r<2;r++){
            dayTotal+=*(*(rowPtr + r) + c);
        }
        cout<<"Day "<<c+1<<": "<<dayTotal<<endl;
    }
    return 0;
}