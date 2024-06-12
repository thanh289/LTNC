#include <bits/stdc++.h>
using namespace std;

struct Node                                                                     
{                                                                               
    int value;                                                                  
    Node *next;                                                                 
};

Node* insert(Node* head, int value)
{
    // Your code here
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

Node* deleteNode(Node* head, int pos)
{
    // Your code here
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