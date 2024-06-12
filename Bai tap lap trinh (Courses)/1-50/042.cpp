//Hoàn thành class LinkedList

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

class LinkedList
{
private:
    Node *head;

public:
    
    LinkedList(){
        head = NULL;
    }
    
    LinkedList(int a[], int n){
        head = NULL;
        for(int i=n-1; i>=0; i--)
            insertHead(a[i]);
    }
    

    void insertHead(int value){
        Node *newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        head = newNode;
    }
   
    void print(){
        Node* tmp = head;
        while(tmp != NULL){
            cout<<tmp->value<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
    }
};


int main(){

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    LinkedList ll(arr, n);
    ll.insertHead(2);
    ll.insertHead(3);
    ll.insertHead(4);
    ll.print();

}