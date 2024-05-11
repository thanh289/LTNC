#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};
 
void printLinkedList(SinglyLinkedListNode* head) {

    while(head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
    
}

int main()
{

}