#include <iostream>
using namespace std;
struct Node {
    int value;
    Node* next;
};

Node* insertHead(Node* head, int value) {
    Node* newNode = new Node;
    newNode->value = value; 
    newNode->next = head; 
    return newNode; 
}


Node* insertTail(Node* head, int value)
{
    Node* newNode = new Node;
    newNode->value = value; 
    newNode->next = nullptr;

    // Nếu danh sách liên kết là rỗng, node mới trở thành head của danh sách
    if (head == nullptr) {
        head = newNode;
    } 
    
    else {
        // Duyệt danh sách liên kết đến phần tử cuối cùng
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        // Sau khi duyệt đến phần tử cuối cùng, gán next của phần tử cuối cùng thành node mới
        current->next = newNode;
    }

    return head;
}

// Hàm để in danh sách liên kết
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    head = insertHead(head, 3);
    head = insertHead(head, 7);
    head = insertHead(head, 5);
    head = insertTail(head, 8);
    printLinkedList(head);

    return 0;
}
