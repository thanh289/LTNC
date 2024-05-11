#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;

    SinglyLinkedListNode(int k)
    {
        data = k;
    }
};
 
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    newNode->data = data;
    newNode->next = NULL;
    
    SinglyLinkedListNode* temp = llist;
    if(temp == NULL) 
    {
        temp = newNode;
        return llist;
    }
    
    if(position == 0)
    {
        newNode->next = temp;
        temp = newNode;
        
        return llist;
    }
    
    for(int i=0; i<=position-2; i++) 
        temp = temp->next;
    
    newNode->next = temp->next;
    temp->next = newNode;
    return llist;
    
}


int main()
{

}   