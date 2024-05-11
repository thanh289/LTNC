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
 
void reversePrint(SinglyLinkedListNode* llist) {
    vector<int> dat;
    SinglyLinkedListNode* temp = llist;
    
    while(temp!=NULL)
    {
        dat.push_back(temp->data);
        temp = temp->next;
    }
    
    int n = dat.size();
    for(int i=n-1; i>=0; i--)
        cout<<dat[i]<<endl;
}


int main()
{

}   