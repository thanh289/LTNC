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

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* n;
    DoublyLinkedListNode* current= llist;
    DoublyLinkedListNode* p = NULL;
        
    while(current!=NULL)
    {
        n = current->next;
        current->next = p;
        current->prev = n;
        p = current;
        current = n;
    }

    return p;
}


int main(){
    
}