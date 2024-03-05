#include <iostream> 
using namespace std;

class Node{
public:
    int data;
    Node* link;
    Node(int value){
        data = value;
        link = nullptr;
    }
};

void insertNode(Node*& head, int value){
    Node* newnode = new Node(value);

    if(head == nullptr){
        head = newnode;
        newnode->link = head;
        return;
    }

    Node* temp = head;
    while(temp->link != head){
        temp = temp->link;
    }
    temp->link = newnode;
    newnode->link = head;
}

void display(Node*& head){
    Node* temp = head;

    do{
        cout<<temp->data<<"  "<<temp->link<<endl;
        temp = temp->link;

    }while(temp != head);
}

void addAthead(Node*& head, int value){
    Node* newhead = new Node(value);
    newhead->link = head;
    Node* temp = head;
    while(temp->link != head){
        temp = temp->link;
    }
    temp->link = newhead;
    head = newhead;
}

void addNodeAt(Node* &head, int k, int value){
    Node* newnode = new Node(value);
    Node* temp = head;
    int count = 0;
    while(count < k){
        temp = temp->link;
        count++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}

void deleteHead(Node*& head){
    Node* todelete = head;
    Node* temp = head;
    while(temp->link != head){
        temp = temp->link;
    }
    temp->link = head->link;
    head = head->link;
}

void deleteAt(Node*& head, int k){
    int count = 1;

    if(k == 1){
        deleteHead(head);
        return;
    }

    Node* temp = head;
    while(count != k-1){
        temp = temp->link;
        count++;
    }
    temp->link = temp->link->link;
    Node* todelete = temp->link;
}

int main(){

    Node* head = nullptr;

    insertNode(head, 12);
    insertNode(head, 13); 
    insertNode(head, 14);
    insertNode(head, 15);
    insertNode(head, 16);
    insertNode(head, 17);
    insertNode(head, 18);
    insertNode(head, 19);
    insertNode(head, 20);
    insertNode(head, 21);
    insertNode(head, 22);
    // display(head);

    cout<<endl;
    addAthead(head, 11);
    // display(head);
    cout<<endl;

    addNodeAt(head, 5, 15);
    // display(head);
    cout<<endl;

    deleteAt(head, 5);
    // display(head);

    cout<<endl;
    deleteAt(head, 1);
    display(head);

    cout<<endl;
    cout<<endl;

    // Node* newhead = reverseKnodes(head, 3);
    // display(newhead);

return 0;
}