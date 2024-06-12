//Hoàn thành deleteDuplicates
//Hoàn thành printReverse

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

Node* insert(Node* head, int value)
{
    Node* newNode = new Node; 
    newNode->value = value; 
    newNode->next = NULL; 

    if (head == NULL || value < head->value) {
        newNode->next = head;
        head = newNode;
        return head; 
    }

    
    Node* current = head;
    while (current->next != NULL && current->next->value < value) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;

    return head; 
}


Node* deleteDuplicates(Node* head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node* current = head->next;
    Node* prev = head;

    while(current!= NULL)
    {   
        if(prev->value == current->value)
        {
            prev->next = current->next;
            delete current;
            current = prev->next;
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }

    return head;
}


void printReverse(Node* head) {
    if (head == NULL)
        return;
    printReverse(head->next);
    cout << head->value << " ";
}

int main()
{
    Node* head = NULL;
    head = insert(head, 3);
    head = insert(head, 7);
    head = insert(head, 5);
    head = insert(head, 8);
    head = insert(head, 6);
    head = insert(head, 2);
    head = insert(head, 1);
    head = insert(head, 7);
    head = insert(head, 3);

    printLinkedList(head);
    head = deleteDuplicates(head);
    printLinkedList(head);
    printReverse(head);
}