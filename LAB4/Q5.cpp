/*
Task 5  Deleting a node by value
Implement DeleteNode(int delData) to remove only the first node containing the requested value. Handle an empty list, deletion of the first, middle, or last node, a missing value, and deletion of the only node. Reconnect the remaining nodes before releasing the removed node. Test each case; for 10, 20, 20, 30, deleting 20 once must leave 10, 20, 30. Display the list after each deletion.
*/
// run: g++ Q5.cpp LinkedList.cpp -o Q5 && Q5.exe
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(){
    Node* head = nullptr;
    AddNode(10, head);
    AddNode(20, head);
    AddNode(20, head);
    AddNode(30, head);
    cout<<"List at the start: ";
    PrintList(head);
    //deleteion in middle
    cout<<"\nDeleting 20 from the list"<<endl;
    DeleteNode(20, head);
    PrintList(head);
    //deletion at start
    cout<<"\nDeleting 10 from the list"<<endl;
    DeleteNode(10, head);
    PrintList(head);
    //deletion at the end
    cout<<"\nDeleting 30 from the list"<<endl;
    DeleteNode(30, head);
    PrintList(head);
    //deletion of a missing value
    cout<<"\nDeleting 40 from the list"<<endl;
    DeleteNode(40, head);
    ClearList(head);
    return 0;
}