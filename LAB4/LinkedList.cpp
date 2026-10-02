#include <iostream>
#include "LinkedList.h"
using namespace std;
//initiallizing three nodes
Node* CreateThreeNodes(Node* head){
    int num1, num2, num3;
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    cout<<"Enter three integers: ";
    cin>>num1>>num2>>num3;
    node1 -> data = num1;
    node1 -> next = node2;
    node2 -> data = num2;
    node2 -> next = node3;
    node3 -> data = num3;
    node3 -> next = nullptr;
    head = node1;
    return head;
}
//prinitng list
void PrintList(Node* head){
    Node* curr = head;
    if (curr == nullptr){
        cout<<"List is empty"<<endl;    
    } else{
        while (curr != nullptr){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }
}
//cleaning up list
void ClearList(Node*& head){
    Node* curr = head;
    while (curr != nullptr){
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }
    head = nullptr;
}
//adding node at teh end of the linked list
void AddNode(int addData, Node*& head){
    Node* newNode = new Node();
    newNode->data = addData;
    newNode->next = nullptr;
    if (head == nullptr){
        head = newNode;
    } else{
        Node* curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
        }
        curr -> next = newNode;
    }
}
//counting number fo nodes in the list
int CountNodes(Node* head){
    int count = 1;
    Node* curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
        count++;
    }
    return count;
}
//for searching through the list and finding the position of the node
int SearchNode(int searchData, Node*& head){
    Node* curr = head;
    int pos=1;
    while(curr!=nullptr){
        if(curr->data == searchData ){
            return pos;
        }  else{
            curr = curr->next;
            pos++;
        }
    }
    return -1;
}

//printing second node
void PrintSecondNode(Node* head){
    if(head == nullptr || head->next == nullptr){
        cout<<"Less than two nodes exist"<<endl;
    }   else{
        cout<<"Second node: "<<head->next->data<<endl;
    }
}

//inserting at the beginning of the list
void InsertAtBeginning(int addData, Node*& head){
    Node* newNode = new Node();
    newNode->data = addData;
    newNode->next = head;
    head = newNode;
}

//deeleting a node by value
void DeleteNode(int delData, Node*& head){
    if (head == nullptr){
        cout<<"List is empty"<<endl;
        return;
    }else {
        Node* curr = head;
        Node* prev = nullptr;
        while(curr!= nullptr && curr->data !=delData){
            prev = curr;
            curr = curr->next;
        }
        if(curr == nullptr){
            cout<<"Value not found"<<endl;
            return;
        }
        if(prev == nullptr){
            head = curr->next;
        }else{
            prev->next = curr->next;
        }
        delete curr;
    }
}