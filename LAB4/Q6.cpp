/*
Task 6  Building a linked list application
Combine your functions in one menu-driven program with options to insert at the beginning, insert at the end, search by value, delete by value, display all nodes, count nodes, display the second node, and exit. Start with an empty list. Repeat the menu until Exit is selected, handle invalid menu choices, and release all remaining nodes before exiting. Reuse the functions developed in Tasks 1–5; CreateThreeNodes() is not needed here.
Check the menu with an empty list, several insertions, duplicate values, a missing search value, deletion until empty, and exit while nodes remain. Be ready to explain why accessing a general position requires traversal and why searching by value can take O(n) time. No written test report is required.
*/
// run: g++ Q6.cpp LinkedList.cpp -o Q6 && Q6.exe
#include <iostream>
#include "LinkedList.h"
using namespace std;
//menu driven rpogram
int main(){
    Node* head = nullptr;
    int choice, data, pos;
    do{
        cout<<"Menu:"<<endl;
        cout<<"1. Insert at the beginning"<<endl;
        cout<<"2. Insert at the end"<<endl;
        cout<<"3. Search by value"<<endl;
        cout<<"4. Delete by value"<<endl;
        cout<<"5. Display all nodes"<<endl;
        cout<<"6. Count nodes"<<endl;
        cout<<"7. Display second node"<<endl;
        cout<<"8. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter value to insert at the beginning: ";
                cin>>data;
                InsertAtBeginning(data, head);
                break;
            case 2:
                cout<<"Enter value to insert at the end: ";
                cin>>data;
                AddNode(data, head);
                break;
            case 3:
                cout<<"Enter value to search: ";
                cin>>data;
                pos = SearchNode(data, head);
                if(pos != -1){
                    cout<<"Value found at position: "<<pos<<endl;
                } else{
                    cout<<"Value not found"<<endl;
                }
                break;
            case 4:
                cout<<"Enter value to delete: ";
                cin>>data;
                DeleteNode(data, head);
                break;
            case 5:
                PrintList(head);
                break;
            case 6:
                cout<<"Number of nodes: "<<CountNodes(head)<<endl;
                break;
            case 7:
                PrintSecondNode(head);
                break;
            case 8:
                ClearList(head);
                cout<<"Exiting program."<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    } while(choice != 8);

    return 0;
}