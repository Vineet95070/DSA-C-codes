#include <iostream>
using namespace std;

// How would you implement the insertion of a new node at the beginning of a linked list, considering the potential impact on the existing structure and integrity of the linked list and use display() function to print the LinkedList nodes with their address filed?

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

    delete head;

return 0;
}





