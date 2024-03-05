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
    head = newnode;
}

void display(Node*& head){
    Node* temp = head;

    do{
        cout<<temp->data<<"  "<<temp->link<<endl;
        temp = temp->link;

    }while(temp != head);
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
    display(head);

    cout<<endl;
    // Node* newhead = reverseKnodes(head, 3);
    // display(newhead);

return 0;
}