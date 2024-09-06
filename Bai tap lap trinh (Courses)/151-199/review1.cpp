//For Unsorted Linklist

#include <bits/stdc++.h>
using namespace std;


struct Node {
    int value;
    Node* next;

    Node(int v, Node* n = NULL){
        value = v;
        next = n;
    }
};

/*
    Print normal
    Print reverse
    Print k last element
*/
void printNode(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void printReverse(Node* head){
    if(head == NULL) return;
    printReverse(head->next);
    cout<<head->value<<" ";
}

void printLast(Node* head, int k){

    Node* tmp1 = head;
    Node* tmp2 = head;
    for(int i=1; i<=k; i++)
        tmp1 = tmp1->next;
    while(tmp1 != NULL){
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    while(tmp2 != NULL){
        cout<<tmp2->value<<" ";
        tmp2 = tmp2->next;
    }
    cout<<endl;
    
}


/*
    Insert head
    Insert tail
    Insert position
*/
Node* insertHead(Node* head, int value){
    Node* newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        return head;
    }

    newNode->next = head;
    head = newNode;
    return head;
}


Node* insertTail(Node* head, int value){
    Node* newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        return head;
    }

    Node* tmp = head;
    while(tmp->next != NULL)
        tmp = tmp->next;
    
    tmp->next = newNode;
    return head;
}

Node* insertPos(Node* head, int value, int pos){
    Node* newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        return head;
    }

    if(pos==0){
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* tmp = head;
    for(int i=1; i<pos; i++){
        if(tmp->next != NULL)
            tmp = tmp->next;
        else break;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;

    return head;

}


/*
    -Delete head
    -Delete tail
    -Delete position
    -Remove duplicate
*/
Node* deleteHead(Node* head){
    if(head == NULL)
        return head;

    Node* tmp = head;
    head = head->next;
    delete tmp;

    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL)
        return head;

    Node* tmp = head;

    while(tmp->next->next != NULL)
        tmp = tmp->next;

    Node* del = tmp->next;
    tmp->next = NULL;
    delete del;

    return head;
}


Node* deletePos(Node* head, int pos){
    
    if(head == NULL) return head;

    if(pos == 0){
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return head;
    }

    Node* tmp = head;
    for(int i=1; i<pos; i++){
        if(tmp->next->next != NULL)
            tmp = tmp->next;
        else break;
    }

    Node* del = tmp->next;
    tmp->next = del->next;
    delete del;

    return head;
}


Node* deleteDuplicate(Node* head){
    if(head == NULL || head->next == NULL) return head;

    map<int, int> count;
    Node* tmp = head;

    count[tmp->value]++;

    while(tmp->next != NULL){
        if(count[tmp->next->value] == 1){
            Node* del = tmp->next;
            tmp->next = del->next;
            delete del;
        }
        else{
            count[tmp->next->value]++;
            tmp = tmp->next;
        }
    }

    return head;
}



/*
    Convert from 
        a1, a2, ..., an, b1, b2, ..., bn
    to 
        a1, b1, a2, b2, ..., an, bn
*/
Node* convert(Node* head){

    if(head == NULL || head->next == NULL 
    || head->next->next == NULL 
    || head->next->next->next == NULL) return head;

    //count number of node
    Node* tmp = head;
    int count = 0;
    while(tmp!=NULL){
        tmp = tmp->next;
        count++;
    }
    if(count%2) return head;

    //Split into 2 node a and b
    count = count/2;
    Node* a = head;
    Node* tmpA = a;
    Node* b = head;
    for(int i=1; i<=count; i++){
        b = b->next;
        if(i<count) tmpA = tmpA->next;
    }
    tmpA->next = NULL;

    
    //Merge
    Node* newHead = new Node(0);
    Node* t = newHead;

    while(a!=NULL && b!=NULL){
        Node* a_next = a->next;
        Node* b_next = b->next;

        t->next = a; t = t->next;
        t->next = b; t = t->next;

        a = a_next;
        b = b_next;
    }

    Node* del = newHead; 
    newHead = newHead->next;
    delete del;
    return newHead;
}


/*
    Rotate
    Ex: with k=3
        0 1 2 3 4
    ->  3 4 0 1 2
*/
Node* rotate(Node* head, int k){
    
    if(head==NULL || head->next==NULL) return head;
    Node* a = head;
    Node* tmpA = a;
    Node* b = head;
    for(int i=1; i<=k; i++){
        b = b->next;
        if(i<k) tmpA = tmpA->next;
    }
    tmpA->next = NULL;

    Node* tmpB = b;
    while(tmpB->next != NULL)
        tmpB = tmpB->next;
    tmpB->next = a;

    return b;

}




int main(){
    Node* head1 = NULL;

    cout<<"check1:"<<endl;
    head1 = insertHead(head1, 1);
    head1 = insertHead(head1, 2);
    head1 = insertHead(head1, 3);
    printNode(head1);

    cout<<"check2:"<<endl;
    head1 = insertTail(head1, 9);
    head1 = insertTail(head1, 2);
    printNode(head1);

    cout<<"check3:"<<endl;
    head1 = insertPos(head1, 7, 3);
    head1 = insertPos(head1, 8, 4);
    head1 = insertPos(head1, 100, 3255);
    head1 = insertPos(head1, 0, 0);
    printNode(head1);
    printLast(head1, 5);
    printReverse(head1);
    cout<<endl;

    cout<<"check4:"<<endl;
    head1 = deleteHead(head1);
    head1 = deleteHead(head1);
    printNode(head1);

    cout<<"check5:"<<endl;
    head1 = deleteTail(head1);
    head1 = deleteTail(head1);
    printNode(head1);

    cout<<"check6:"<<endl;
    head1 = deletePos(head1, 3);
    head1 = deletePos(head1, 2);
    printNode(head1);

    cout<<"check7:"<<endl;
    head1 = insertPos(head1, 1, 1);
    head1 = insertPos(head1, 1, 1);
    head1 = insertPos(head1, 1, 1);
    head1 = insertPos(head1, 2, 1);
    head1 = insertPos(head1, 9, 1);
    printNode(head1);
    head1 = deleteDuplicate(head1);
    printNode(head1);
    
    Node* newHead = NULL;
    newHead = insertPos(newHead, 1, 1);
    newHead = insertPos(newHead, 1, 1);
    newHead = insertPos(newHead, 1, 1);
    newHead = insertPos(newHead, 1, 1);
    newHead = insertPos(newHead, 1, 1);
    printNode(newHead);
    newHead = deleteDuplicate(newHead);
    printNode(newHead);


    cout<<"check7:"<<endl;
    Node* head2 = NULL;
    head2 = insertHead(head2, 1);
    head2 = insertHead(head2, 2);
    head2 = insertHead(head2, 3);
    head2 = insertHead(head2, 3);
    head2 = insertHead(head2, 6);
    head2 = insertHead(head2, 3);
    head2 = insertHead(head2, 2);
    head2 = insertHead(head2, 1);
    head2 = insertHead(head2, 8);
    head2 = insertHead(head2, 10);
    printNode(head2);
    head2 = convert(head2);
    printNode(head2);

    cout<<"check8:"<<endl;
    head2 = rotate(head2, 3);
    printNode(head2);



}