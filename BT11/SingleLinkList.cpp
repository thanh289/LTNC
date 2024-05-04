#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;

};
typedef node* listNode;

node* makeNode(int x)
{
    node* newNode = new node();
    newNode->data = x;
    newNode->next = NULL;
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
    newNode->next = *head;
    *head = newNode;
}

void pushBack(node** head, int x)
{
    node* newNode = makeNode(x);
    if(*head == NULL) 
    {
        *head = newNode;
        return;
    }

    node *temp = *head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
        
}

void insert(node** head, int k, int x)
{
    if(k<1) return;
    if(k==1)
        pushFront(head, x);
    
    node* temp = *head;
    for(int i=1; i<=k-2; i++)
        temp = temp->next;

    node* newNode = makeNode(x);
    newNode->next = temp->next;
    temp->next = newNode;
}

void popFront(node** head)
{
    if(*head == NULL) return;

    node *temp = *head;
    *head = (*head)->next;

    delete temp;
}

void popBack(node** head)
{
    if(*head == NULL) return;

    node *temp = *head;
    if(temp->next == NULL)
    {
        *head = NULL;
        delete temp;
        return;
    }

    while(temp->next->next != NULL)
        temp = temp->next;
    
    node* last = temp->next;
    temp->next = NULL;
    delete last;
}


void erase(node** head, int k)
{
    if(k==1)
    {
        popFront(head);
        return;
    }

    node* temp = *head;
    for(int i=1; i<=k-2; i++)
        temp = temp->next;
    
    node* kth = temp->next;
    temp->next = kth->next;
    delete kth;
}


void reversePrint(node* head) {
    
    if(head==NULL){ return ;}
    reversePrint(head->next) ; //recursive call
    cout<< head->data <<" " ;    //print
    //way 2: can push all data in a vector
}


// node* reverse(node* head)
// {
//     node* next;
//     node* current= head;
//     node* prev = NULL;
    
//     while(current!=NULL)
//     {
//         next=current->next;
//         current->next=prev;
//         prev=current;
//         current=next;
//     }

//     return prev;
// }

void removeDuplicatesInRow(node** head) {
    node* tmp = *head;
    
    while(tmp->next!=NULL)
    {
        if(tmp->data != tmp->next->data)
            tmp = tmp->next;
        else
        {
            node* remove = tmp->next;
            tmp->next = remove->next;
            delete remove;
        }
    }
}

node* mergeLists(node* head1, node* head2) {

    node* newArr = makeNode(0);
    node* temp = newArr;
    
    node* tmp1 = head1;
    node* tmp2 = head2;
    
    while(tmp1 != NULL && tmp2 != NULL)
    {
        if(tmp1->data <= tmp2->data)
        {
            temp->next = tmp1;
            tmp1 = tmp1->next;
        }
        else
        {
            temp->next = tmp2;
            tmp2 = tmp2->next;
        }
        temp = temp->next;
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
    
    popFront(&newArr);
    return newArr;
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
    insert(&head, 11, 100);
    //

    //
    popFront(&head);
    //

    //
    popBack(&head);
    //

    //
    erase(&head, 3);
    //

    //
    removeDuplicatesInRow(&head);
    //


    //
    node* head1 = NULL;
    for(int i=2; i<=8; i+=2)
        pushBack(&head1, i);
    node* head2 = NULL;
    for(int i=1; i<=11; i+=2)
        pushBack(&head2, i);
    node* mergeNode = mergeLists(head1, head2);
    //

    printNode(head);
    reversePrint(head);
    cout<<endl;

    // printNode(head1);
    // printNode(head2);
    printNode(mergeNode);

}