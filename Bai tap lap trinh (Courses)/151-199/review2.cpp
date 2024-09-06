//For Sorted Linklist (Increase)
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* next;

    Node(int v, Node* n = NULL){
        value = v;
        next = n;
    }
};


void printNode(Node* head){
    Node* tmp = head;
    while(tmp){
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

Node* insert(Node* head, int value){
    Node* newNode = new Node(value);

    if(head==NULL || value <= head->value){
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* tmp = head;
    while(tmp->next!=NULL && value > tmp->next->value)
        tmp = tmp->next;
    
    newNode->next = tmp->next;
    tmp->next = newNode;

    return head;
}

/*
    Delete duplicate
    Delete element just appear once
*/
Node* deleteDuplicate(Node* head){
    if(head == NULL || head->next == NULL)
        return head;

    Node* tmp = head;
    while(tmp->next != NULL){
        if(tmp->value == tmp->next->value){
            Node* del = tmp->next;
            tmp->next = del->next;
            delete del;
        }
        else
            tmp = tmp->next;
    }
    return head;
}


Node* deleteSingle(Node* head){
    
    Node* tmp1 = head;
    map<int, int> count;

    while(tmp1!=NULL){
        count[tmp1->value]++;
        tmp1 = tmp1->next;
    }

    while(count[head->value]==1){
        Node* del = head;
        head = head->next;
        delete del;
        if(head == NULL) return head;
    }

    

    Node* tmp2 = head;
    while(tmp2->next != NULL){
        if(count[tmp2->value] == 1){
            Node* del = tmp2->next;
            tmp2->next = del->next;
            delete del;
        }
        else
            tmp2 = tmp2->next;
    }
    return head;
}


int main(){

    cout<<"Check 1:"<<endl;
    Node* head1 = NULL;
    head1 = insert(head1, 1);
    head1 = insert(head1, 9);
    head1 = insert(head1, 4);
    head1 = insert(head1, 2);
    head1 = insert(head1, 3);
    head1 = insert(head1, 4);
    head1 = insert(head1, 9);
    printNode(head1);

    cout<<"check 2:"<<endl;
    head1 = deleteDuplicate(head1);
    printNode(head1);
    
    cout<<"check 3:"<<endl;
    head1 = deleteSingle(head1);
    printNode(head1);

}