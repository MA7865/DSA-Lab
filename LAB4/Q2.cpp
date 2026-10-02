/*
Task 2  Appending nodes using a loop
Extend your class with AddNode(int addData), which inserts a new node at the end, and CountNodes(), which returns the number of nodes. In main(), input a non-negative number n and use a loop to read and append n integers. Display the list and its count. Test n = 0, n = 1, and n = 5. Each new node must have next set to nullptr.
*/
// run: g++ Q2.cpp LinkedList.cpp -o Q2 && Q2.exe
#include <iostream>
#include "LinkedList.h"
using namespace std;
//main for testing the number of nodes and adding nodes to the list
int main(){
    Node* head = nullptr;
    int n;
    cout<<"Enter a non-negative number n: ";
    cin>>n;
    for (int i = 0; i < n; i++){
        int num;
        cout<<"Enter an integer: ";
        cin>>num;
        AddNode(num, head);
    }
    PrintList(head);
    cout<<"Number of nodes: "<<CountNodes(head)<<endl;
    return 0;
}
