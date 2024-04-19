#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};


Node* insertHead(Node* head, int value) {
    Node* newNode = new Node;
    newNode->value = value; 
    newNode->next = head; 
    return newNode; 
}


Node* deleteNode(Node* head, int pos)
{
    if (head == nullptr)
        return nullptr;

    if (pos == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    
    Node* prev = nullptr;
    Node* current = head;
    int count = 0;
    while (current != nullptr && count < pos) {
        prev = current;
        current = current->next;
        count++;
    }

    // Xoá node tại vị trí pos nếu tìm thấy
    if (current != nullptr) {
        prev->next = current->next;
        delete current;
    }

    return head;
}


void printLinkedList(Node* head)
{
    while(head != nullptr)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = nullptr;

    head = insertHead(head, 3);
    head = insertHead(head, 7);
    head = insertHead(head, 5);
    head = insertHead(head, 8);
    head = deleteNode(head, 0);
    printLinkedList(head);
}