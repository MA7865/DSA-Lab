#pragma once

// Structure for node
struct Node {
    int data;
    Node* next;
};

// Function declarations
Node* CreateThreeNodes(Node* head);
void PrintList(Node* head);
void ClearList(Node*& head);
int CountNodes(Node* head);
void AddNode(int addData, Node*& head);
int SearchNode(int searchData, Node*& head);
void PrintSecondNode(Node* head);
void InsertAtBeginning(int addData, Node*& head);
void DeleteNode(int delData, Node*& head);