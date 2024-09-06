//For Sorted Linklist (Increase or Decrease)

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* next;

    Node(int v, Node* n = NULL){
        value = v;
        next = n;
    }
};

void printNode(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

Node* insertHead(Node* head, int value){
    Node* newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        return head;
    }

    newNode->next = head;
    head = newNode;
    return head;
}

/*
    The array is already sorted increase or decrease
    Insert the value to keep it sorted
*/

Node* insert(Node* head, int value){
    Node* newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        return head;
    }
    if(head->next == NULL){
        if(value<=head->value){
            newNode->next = head;
            head = newNode;
            return head;
        }

        head->next = newNode;
        return head;
    }

    bool isIncreased = true;
    Node* check = head;
    while(check->next != NULL){
        if(check->value < check->next->value) break;
        else if(check->value > check->next->value){
            isIncreased = false;
            break;
        }
        check = check->next;
    }

    if(isIncreased){
        Node* tmp = head;
        while(tmp->next != NULL && value > tmp->next->value)
            tmp = tmp->next;
        
        newNode->next = tmp->next;
        tmp->next = newNode;
        return head;
    }

    else{
        Node* tmp = head;
        while(tmp->next != NULL && value < tmp->next->value)
            tmp = tmp->next;
        
        newNode->next = tmp->next;
        tmp->next = newNode;
        return head;
    }


}

int main(){
    Node* head = NULL;

    head = insertHead(head, 1);
    head = insertHead(head, 4);
    head = insertHead(head, 7);
    head = insertHead(head, 10);
    printNode(head);
    head = insert(head, 2);
    head = insert(head, 5);
    printNode(head);
    
}