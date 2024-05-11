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
 
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* tmp = llist;
    
    while(tmp->next!=NULL)
    {
        if(tmp->data != tmp->next->data)
            tmp = tmp->next;
        else
        {
            SinglyLinkedListNode* remove = tmp->next;
            tmp->next = remove->next;
            delete remove;
        }
    }
    
    return llist;
}


int main()
{
    
}   