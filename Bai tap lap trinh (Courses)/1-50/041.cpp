//Hoàn thành hàm convert


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

    if(head == NULL || value < head->value){
        newNode->next = head;
        head = newNode;
        return head;
    }


    Node* tmp = head;
    while(tmp->next != NULL || tmp->next->value < value){
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;

    return head;
}

Node* convert(Node* head)
{
    if (head == NULL || head->next == NULL || head->next->next == NULL)
        return head; 
        
    Node* c = head;
    int count = 0;
    while(c != NULL){
        count++;
        c = c->next;
    }

    if(count%2==1) return head;

    int bStart = count / 2;
    Node* a = head;
    Node* tmpA = a;
    Node* b = head;
    for(int i=1; i<=bStart; i++){
        b = b->next;
        if(i<bStart)
            tmpA = tmpA->next;
    }
    tmpA->next = NULL;
    

    Node* pa = a;
    Node* pb = b;
    
    
    while (pb != NULL) {
        Node* pa_next = pa->next;
        Node* pb_next = pb->next;
        
        pa->next = pb;
        pb->next = pa_next;
        
        pa = pa_next;
        pb = pb_next;
    }
    
    return head;
}


int main()
{
    Node* head = NULL;
    head = insert(head, 3);
    head = insert(head, 7);
    head = insert(head, 5);
    head = insert(head, 8);
    head = insert(head, 2);
    head = insert(head, 2);
    head = insert(head, 1);
    head = insert(head, 7);

    printLinkedList(head);
    // head = convert(head);
    // printLinkedList(head);

}