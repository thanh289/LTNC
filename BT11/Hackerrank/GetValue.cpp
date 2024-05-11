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
 
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* newArr = new SinglyLinkedListNode(0);
    SinglyLinkedListNode* temp = newArr;
    
    SinglyLinkedListNode* tmp1 = head1;
    SinglyLinkedListNode* tmp2 = head2;
    
    while(tmp1 != NULL && tmp2 != NULL)
    {
        if(tmp1->data <= tmp2->data)
        {
            temp->next = tmp1;
            tmp1 = tmp1->next;
            temp = temp->next;
        }
        else
        {
            temp->next = tmp2;
            tmp2 = tmp2->next;
            temp = temp->next;
        }
    }
    
    while(tmp1 != NULL)
    {
        temp->next = tmp1;
        tmp1 = tmp1->next;
        temp = temp->next;
    }
    
    while(tmp2 != NULL)
    {
        temp->next = tmp2;
        tmp2 = tmp2->next;
        temp = temp->next;
    }
    
     SinglyLinkedListNode* remove = newArr;
     newArr = newArr->next;
     delete remove;
     
    return newArr;
}


int main()
{
    
}   