# include <bits/stdc++.h>

using namespace std;

struct Node{
    const char* value;
    Node* next;
};

Node* addFirst(const char* element, Node *head){
    Node* newNode = new Node;
    newNode -> value = element;
    newNode -> next = head;
    return newNode;
}

int main(){
    Node* head = new Node;
    head = addFirst("10", head);
}