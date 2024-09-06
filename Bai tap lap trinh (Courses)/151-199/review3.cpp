#include <iostream>
using namespace std;

class Node {
    int value;
public:
    Node* next;
    Node* prev;

    Node(int v, Node* n = NULL, Node* p = NULL){
        value = v; next = n; prev = p;
    }

    int getValue() {
        return value;
    }
};

Node* insert(Node* head, int value){
    Node* newNode = new Node(value);

    if(head==NULL || value <= head->getValue()){
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* tmp = head;
    while(tmp->next!=NULL && value > tmp->next->getValue())
        tmp = tmp->next;
    
    newNode->next = tmp->next;
    tmp->next = newNode;

    return head;
}

Node* sort(Node* head) {
    
    Node* sorted = NULL;

    Node* take = head;
    while(take != NULL){

    }
}

void printList(Node* head) {
    while (head) {
        cout << head->getValue() << " ";
        head = head->next;
    }
        cout << endl;
}


int main() {
    Node* head = new Node(4);
    head->next = new Node(3);
    head->next->prev = head;
    head->next->next = new Node(1);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(2);
    head->next->next->next->prev = head->next->next;

    cout << "Original List: ";
    printList(head);

    head = sort(head);

        cout << "Sorted List: ";
    printList(head);

    return 0;
}
