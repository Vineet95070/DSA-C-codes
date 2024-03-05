#include <iostream>
using namespace std;

// In the context of a singly linked list data structure implemented in C++, describe the procedure for deleting the head node without employing a dedicated deleteHead() function. Provide a code snippet or algorithmic representation to demonstrate your proposed solution 

class Node{
public:
    int data;
    Node *link;
    Node(int value){
        data = value;
        link = NULL;
    }
};

void insertNode(Node* &head, int value){

    Node* newnode = new Node(value);
    Node* temp = head;
    if( temp == NULL){
        head = newnode;
        return;
    }
    
    while(temp->link != NULL){
        temp = temp->link;
    }
    temp->link = newnode;
}

void insertAtHead(Node* &head, int value){

    Node* newnode = new Node(value);
    Node* temp = head;

    newnode->link = temp;
    head = newnode;
}

void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"  "<<temp->link<<endl;
        temp = temp->link;
    }
}

void deleteHeadnode(Node* &head){
    Node* temp = head;
    
    head = head->link;
    delete temp;
}

int main(){

    Node* head = NULL;

    insertNode(head, 12);
    insertNode(head, 13);
    insertNode(head, 14);
    insertNode(head, 15);
    display(head);

    insertAtHead(head, 11);
    cout<<endl<<endl;
    display(head);
    cout<<endl<<endl;

    deleteHeadnode(head);
    display(head);

    delete head;

return 0;
}





