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
 
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    newNode->data = data;
    newNode->next = NULL;
    
    SinglyLinkedListNode* temp = head;
    if(temp == NULL)
    {
        head = newNode;
        return head;
    }
    
    newNode->next = head;
    head = newNode;
    
    return head;
}


int main()
{

}   