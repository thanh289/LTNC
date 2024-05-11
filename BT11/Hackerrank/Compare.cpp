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
 
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* tmp1 = head1;
    SinglyLinkedListNode* tmp2 = head2;
    
    while(tmp1!=NULL && tmp2!=NULL)
    {
        if(tmp1->data != tmp2->data) break;
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    
    if(tmp1==NULL && tmp2==NULL) return 1;
    return 0;
} 


int main()
{
    
}   