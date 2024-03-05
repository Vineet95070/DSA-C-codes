#include <iostream> 
using namespace std;

class Node{
public:
    int data;
    Node* link;
    Node(int value){
        data = value;
        link = NULL;
    }
};

void addNode(Node* &head, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        return ;
    }

    Node* temp = head;
    while(temp->link != NULL){
        temp = temp->link;
    }
    temp->link = newnode;
}

void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"  "<<temp->link<<endl;
        temp = temp->link;
    }cout<<endl;
}

void insertAtHead(Node*& head, int value){
    Node* newnode = new Node(value);

    newnode->link = head;
    head = newnode;
}

void deletefirstNode(Node* &head){
    Node* temp = head;
    head = head->link;
}

void deleteNodeWhere(Node* &head, int value){
    Node* newnode = new Node(value);
    Node* temp = head;

    while(temp->link->data != value){
        temp = temp->link;
    } 
    temp->link = temp->link->link;
}

Node* reverseList(Node* &head){
    Node* previous = NULL;
    Node* curent = head;
    Node* next;

    while(curent != NULL){
        next = curent->link;    //save the previous node
        curent->link = previous;    //store adress of previous node to curent node 

        previous = curent;  //move our pointers(previous, curent and next one step forward)
        curent = next;
    }
    return previous;
}

int main(){

    Node* head = NULL;

    addNode(head, 12);
    addNode(head, 13);
    addNode(head, 14);

    insertAtHead(head,11);    
    insertAtHead(head,10);    
    display(head);

    Node* newhead = reverseList(head);
    display(newhead);

return 0;
}