#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;
};

node* makeNode(int x)
{
    node* newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void printNode(node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void pushFront(node** head, int x)
{
    node* newNode = makeNode(x);
    newNode->next = (*head);
    if(*head != NULL)
        (*head)->prev = newNode;
    
    *head = newNode;
}

void pushBack(node** head, int x)
{
    node* newNode = makeNode(x);
    if(head == NULL)
        *head = newNode;

    node* temp = *head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
    
}

void insert(node** head, int x, int k)
{
    if(k==1) 
    {
        pushFront(head, x);
        return;
    }
    
    node* temp = *head;
    for(int i=1; i<=k-1; i++){
        temp = temp->next;
    }
    
    node* newNode = makeNode(x);
    newNode->next = temp;
    temp->prev->next = newNode;
    newNode->prev = temp->prev;
    temp->prev = newNode;
    
}

int main()
{
    node* head = NULL;
    //
    for(int i=5; i>=1; i--)
        pushFront(&head, i);
    //

    //
    for(int i=5; i<=10; i++)
        pushBack(&head, i);
    //

    //
    insert(&head, 100, 11);
    //

    printNode(head);
}