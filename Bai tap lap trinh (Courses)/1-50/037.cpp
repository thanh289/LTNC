#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

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


void printLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}



int main()
{
    Node* head1 = NULL;
    head1 = insert(head1, 3);
    head1 = insert(head1, 7);
    head1 = insert(head1, 5);
    head1 = insert(head1, 8);
    printLinkedList(head1);

    Node* head2 = NULL;
    head2 = insert(head2, 2);
    head2 = insert(head2, 4);
    head2 = insert(head2, 6);
    head2 = insert(head2, 9);
    printLinkedList(head2);

}