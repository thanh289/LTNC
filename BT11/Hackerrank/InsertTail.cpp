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
 
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    newNode->data = data;
    newNode->next = NULL;
    
    SinglyLinkedListNode* temp = head;
    if(temp == NULL)
    {
        head = newNode;
        return head;
    }
    
    while(temp->next != NULL) temp = temp -> next;
    temp->next = newNode;
    
    return head;
    
}

int main()
{

}   