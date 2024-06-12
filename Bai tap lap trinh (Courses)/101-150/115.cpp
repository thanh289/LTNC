#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* next;
};

void printLast(Node* head, int k)
{
    if (head == NULL || k <= 0) {
        return;
    }

    Node* fast = head;
    Node* slow = head;

    for (int i = 0; i < k; i++) {
        if (fast == NULL) 
            return; 
        fast = fast->next;
    }

   
    while (fast != NULL) {
        slow = slow->next;
        fast = fast->next;
    }

    Node* current = slow;
    while (current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }
}
