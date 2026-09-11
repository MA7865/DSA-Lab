#include <iostream>
using namespace std;
//recursive function
void reverseArray(int num[], int start, int end) {
    if (start >= end) {//base case
        return;}
    //swap the elements at start and end
    int temp = num[start];
    num[start] = num[end];
    num[end] = temp;
    //recursive call 
    reverseArray(num, start + 1, end - 1);
}
int main(){
    int num[6];
    //inputting 6 int
    cout <<"enter 6 integers";
    for(int i=0;i<6;i++){
        cin >> num[i];
    }
    reverseArray(num, 0, 5);//reverseing it
    cout << "Reversed array: ";
    //pritnig the reversed array
    cout <<num[0]<<" "<<num[1]<<" "<<num[2]<<" "<<num[3]<<" "<<num[4]<<" "<<num[5]<<endl;
    return 0;
}