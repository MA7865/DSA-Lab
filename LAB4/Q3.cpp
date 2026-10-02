/*
Task 3  Searching and accessing the second node
Implement SearchNode(int searchData) to display the position of the first matching value, counting the first node as position 1. Print "Value not found" when there is no match. Also implement PrintSecondNode() to display only the second node, or a suitable message if fewer than two nodes exist. Test an empty list, a one-node list, and the list 10, 20, 30, 20. Search for 20 and 99; the results should be position 2 and not found.
*/
// run: g++ Q3.cpp LinkedList.cpp -o Q3 && Q3.exe
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(){
    Node* head = nullptr;
    //test for empty list
    cout<<"Searching in empty list: "<<SearchNode(20, head)<<endl;
    PrintSecondNode(head);
    cout<<endl;
    //test for one node list
    AddNode(10, head);
    cout<<"Searching in one node list: "<<SearchNode(20, head)<<endl;
    PrintSecondNode(head);
    cout<<endl;
    //teste for 10,20,30,20 list
    AddNode(20, head);
    AddNode(30, head);
    AddNode(20, head);
    cout<<"Searching for 20: "<<SearchNode(20, head)<<endl;
    cout<<"Searching for 99: "<<SearchNode(99, head)<<endl;
    PrintSecondNode(head);
    cout<<endl;
    return 0;
}