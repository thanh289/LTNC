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
 
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* temp = llist;
    if(temp == NULL) 
    {
        return llist;
    }
    
    if(position==0)
    {
        llist = llist->next;
        delete temp;
        return llist;
    }
    
    for(int i=0; i<position-1; i++) 
        temp = temp->next;
    
    SinglyLinkedListNode* kth = temp->next;
    temp->next = kth->next;
    delete kth;
    
    return llist;
}



int main()
{

}   