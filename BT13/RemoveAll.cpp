#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* next;

    Node(int k)
    {
        value = k;
        next = NULL;
    }
};

struct List{
    Node* head = NULL;

    void removeAll(int k);
    void push(int k);
    void print();
};



void List::removeAll(int k)
{
    if(head == NULL) return;

    Node* tmp = head;

    while(head != NULL && head->value == k)
    {
        head = head->next;
        delete tmp;
        tmp = head;
    }
    if(head == NULL) return;


    while(tmp->next != NULL)
    {
        if(tmp->next->value == k)
        {
            Node* t = tmp->next;
            tmp->next = t->next;
            delete t;
        }

        else if(tmp->next->value != k) tmp = tmp->next;
    }    
}

void List::push(int k)
{
    Node *tmp = new Node(k);
    tmp->next = head;
    head = tmp;
}

void List::print()
{

    if(head == NULL) cout<<"NOTHING LEFT!"<<endl;
    else{
        Node* tmp = head;
        while(tmp != NULL)
        {
            cout<<tmp->value<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
    }
    
}


int main()
{
    List l;
    for(int i=0; i<10; i++)
    {
        int x; cin>>x;
        l.push(x);
        l.print();
    }
    cout<<"DELETE ALL ELEMENTS 2 :D!!!"<<endl;
    l.removeAll(2);
    l.print();
}