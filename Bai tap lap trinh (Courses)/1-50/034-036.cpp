#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;

    Node(int v, Node* n = NULL){
        value = v;
        next = n;
    }
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
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return head;
}


Node* insertTail(Node* head, int value)
{
    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        return head;
    } 
    
    else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }

    return head;
}



int main() {
    Node* head = NULL;
    // insertHead(head, 3);
    head = insertTail(head, 2);
    printLinkedList(head);

    return 0;
}