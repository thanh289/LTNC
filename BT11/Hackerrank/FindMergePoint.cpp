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

bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* curr_node = head;
    map<SinglyLinkedListNode*, int> data;
    
    while(curr_node != nullptr) {
        if(data.find(curr_node) != data.end()) return true;
        
        data[curr_node] = 1;
        curr_node = curr_node->next;
    }
    
    return false;

}


int main(){
    
}


int main(){
    
}