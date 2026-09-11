#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    //entering 10 ints
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    //counter for occurenec
    int count = 0;
    for (int i = 0; i < 10; i++) {
        bool found = false;
        //check whether num[i] has already appeared
        for (int j = 0; j < count; j++) {
            if (numbers[j] == numbers[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            int temp = numbers[count];
            numbers[count] = numbers[i];
            numbers[i] = temp;
            count++;
        }
    }
    //printing the unique values
    cout << "Unique values: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";}
    cout << endl;
    cout << "Count: " << count << endl;//count of occurences
    return 0;
}