//BAT DAU: Bo sung code o day. Phan ham main() co san o cho khac va khong sua doi duoc

struct Node {
    int code;
    Node* next;
};


Node* insertSecond(Node* head, int code){
    
    Node* newNode = new Node();
    newNode->code = code;
    newNode->next = nullptr;
    
    if(head == nullptr){
        head = newNode;
        return head;
    }
    
    if(head->next == nullptr){
        head->next = newNode;
        return head;
    }
    
    newNode->next = head->next;
    head->next = newNode;
    
    return head;
}