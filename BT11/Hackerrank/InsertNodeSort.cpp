#include <bits/stdc++.h>
using namespace std;

struct DoublyLinkedListNode {
    int data;
    DoublyLinkedListNode* next;
    DoublyLinkedListNode* prev;

    DoublyLinkedListNode(int k){
        data = k;
    }
};

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    DoublyLinkedListNode* temp = llist;
    
    if(data<temp->data)
    {
        newNode->next = temp;
        temp->prev = newNode;
        llist = newNode;
        
        return llist;
    }
    
    while(temp->next!=NULL && temp->data < data)
        temp = temp->next;
    
    
    if(temp->next==NULL && temp->data<data)
    {
        temp->next = newNode;
        newNode->prev = temp;
        return llist;
    }
    
    newNode->prev = temp->prev;
    newNode->next = temp;
    temp->prev->next = newNode;
    temp->prev = newNode;
    
    return llist;
   
}


int main(){
    
}