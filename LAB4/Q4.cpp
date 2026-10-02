/*
Task 4  Inserting at the beginning
Implement InsertAtBeginning(int addData). Allocate a node, connect it to the current first node, and update head. Keep AddNode() available for insertion at the end. Starting with an empty list, insert 20 at the beginning, then 10 at the beginning, and finally append 30. Display the list after each operation. The final order must be 10, 20, 30.
Functions to retain: AddNode(), InsertAtBeginning(), PrintList(), and ClearList().
*/
// run: g++ Q4.cpp LinkedList.cpp -o Q4 && Q4.exe
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(){
    Node* head = nullptr;
    InsertAtBeginning(20, head);
    PrintList(head);
    cout<<endl;
    InsertAtBeginning(10, head);
    PrintList(head);
    cout<<endl;
    AddNode(30, head);
    PrintList(head);
    cout<<endl;
    ClearList(head);
    return 0;
}