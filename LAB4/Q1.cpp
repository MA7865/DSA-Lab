/*
Task 1  Creating and traversing a list
Define the node structure and List class. Write CreateThreeNodes() to input three integers, allocate three nodes, and link them in input order. Call it once on an empty list. Implement PrintList() using a loop and ClearList() for cleanup. Display an appropriate message for an empty list. Test PrintList() before creation and after entering 10, 20, and 30; the values must appear in that order.
*/
// run: g++ Q1.cpp LinkedList.cpp -o Q1 && Q1.exe
#include <iostream>
#include "LinkedList.h"
using namespace std;

//main function
int main(){
    Node* head = nullptr;
    head = CreateThreeNodes(head);
    PrintList(head);
    ClearList(head);
    PrintList(head);
    return 0;
}