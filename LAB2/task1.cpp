/*
A shop records the number of items sold over five days. Declare int sales[5]; and int* p = sales; inside main().
1. Read five non-negative values through *(p + i). Use pointer notation again to display the values and calculate the total. Keep p pointing to the first element.
2. Add 2 to the third day’s value through the pointer. Display the updated values and updated total.
3. Explain p, &p, *p and *(p + 2). State the valid indices and explain why *(p + 5) cannot be used to read an element
*/
#include <iostream>
using namespace std;
void printAndCalc(int* p, int size) { //int* p show that p is a pointer - basically a pointer var will be passed through tthe func
    int total = 0;
    cout << "Sales values: ";
    for (int i = 0; i < size; i++) {
        cout << *(p + i) << " ";
        total += *(p + i);
    }
    cout << "\nTotal sales: " << total << endl;
}
int main() {
    
    int sales[5];
    int* p = sales;// sales or &sales[0] give teh address of teh start of the array
    //read values into the static array
    cout << "Enter sales for 5 days: ";
    for (int i=0;i<5;i++){
        cin>>*(p+i);
    }
    //displaying val and calc total
    printAndCalc(p, 5);
    //updating array
    *(p + 2) += 2; //adding 2 to the third day’s value through the pointer
    cout << "\nUpdated sales values: ";
    printAndCalc(p, 5);
    return 0;
}
