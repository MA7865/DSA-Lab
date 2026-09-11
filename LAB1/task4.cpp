#include <iostream>
using namespace std;

int main() {
    int numbers[8];
    cout << "Enter 8 integers: ";
    //inputting 8 int in array
    for (int i = 0; i < 8; i++) {
        cin >> numbers[i];
    }
    //assigning first num of array to smallest and largest var for comparison
    int largest = numbers[0];
    int smallest = numbers[0];
    //for finding largest and smallest pos
    int largestIndex = 0;
    int smallestIndex = 0;
    //largest n smalles num with their first pos
    for (int i = 1; i < 8; i++) {
        if (numbers[i] > largest) {//> used and not >= so that first occurenece remanis saved
            largest = numbers[i];
            largestIndex = i;
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
            smallestIndex = i;
        }
    }
    // printing stuff
    cout << "largest num: " << largest << endl;
    cout << "largest pos: " << largestIndex << endl;
    cout << "smallest num: " << smallest << endl;
    cout << "smallest pos: " << smallestIndex << endl;
    return 0;
}