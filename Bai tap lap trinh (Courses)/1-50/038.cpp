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


Node* insertHead(Node* head, int value) {
    Node* newNode = new Node;
    newNode->value = value; 
    newNode->next = head; 
    head = newNode;
    return head; 
}


Node* deleteNode(Node* head, int pos)
{
    if (head == NULL) 
        return NULL;

    if (pos == 0) { 
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    Node* temp = head;
    for(int i=0; i<=pos-2; i++){
        if(temp->next->next != NULL)
            temp = temp->next;
    }
    
    Node* del = temp->next;
    temp->next = del->next;
    delete del;
    
    return head;

}



int main()
{
    Node* head = NULL;

    head = insertHead(head, 3);
    head = insertHead(head, 7);
    head = insertHead(head, 5);
    head = insertHead(head, 8);
    head = deleteNode(head, 0);
    printLinkedList(head);
}