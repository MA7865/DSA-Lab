/*
The following fragment is intended to read and display three integers. Inspect it before running it; its current behaviour is undefined.
int n = 3;
int* values = new int[n];
for (int i = 0; i <= n; i++)
    cin >> values[i];
delete values;
cout << values[0];
1.	Identify three errors. For each, state the problem and explain its consequence.
2.	Write a corrected complete program that reads and displays all three integers, releases the allocation correctly and resets the pointer. Test with 4 5 6.
3.	Briefly distinguish an out-of-bounds access, a dangling pointer and a memory leak. Explain why a program appearing to run successfully does not prove its memory accesses are valid.
*/
#include <iostream>
using namespace std;

int main() {
    int n = 3;
    //setting up teh arrya
    int* values = new int[n];
    //entering three ints
    for (int i = 0; i < n; i++) {
        cin >> *(values + i);
    }
    //display 3 ints
    cout << "Values: ";
    for (int i = 0; i < n; i++) {
        cout << *(values + i) << " ";
    }
    cout << endl;
    //release memory
    delete[] values;
    values = nullptr;
    return 0;
}