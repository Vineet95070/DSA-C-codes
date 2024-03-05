#include <iostream> 
using namespace std;

class Node{
public:
    int data;
    Node* nlink;
    Node* plink;
    Node(int value){
        data = value;
        nlink = NULL;
        plink = NULL;
    }
};

void display(Node*& head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->plink<<"  "<<temp->data<<"  "<<temp->nlink<<endl;
        temp = temp->nlink;
    }
}

void insertNode(Node*& head, int value){
    Node* newnode = new Node(value);

    if(head == nullptr){
        head = newnode;
        return;
    }

    Node* temp = head;
    while(temp->nlink != nullptr){
        temp = temp->nlink;
    }
    temp->nlink = newnode;
    newnode->plink = temp;
}

void insertAtHead(Node*& head, int value){
    Node* newhead = new Node(value);
    Node* temp = head;

    temp->plink = newhead;
    newhead->nlink = temp;
    head = newhead;
}

int main(){

    Node* head = NULL;

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
    display(head);

    cout<<endl;
    insertAtHead(head, 11);
    display(head);

return 0;
}