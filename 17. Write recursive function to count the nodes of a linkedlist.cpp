#include <iostream>
using namespace std;


// Q. How would you count the number of nodes in a linkedlist?

// Q. Write recursive function to count the nodes of a linkedlist.


class Node{
public:
    int data;
    Node* link;
    Node(int value){
        data = value;
        link = nullptr;
    }
};

void insertNode(Node* &head, int value){
    Node* newnode = new Node(value);

    if(head == nullptr){
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp->link != nullptr){
        temp = temp->link;
    }
    temp->link = newnode;
}

void display(Node*& head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"  "<<temp->link<<endl;
        temp = temp->link;
    }
}

int count(Node*& head){
    if(head==nullptr){
        return 0;
    }
    return 1+count(head->link);
}


int main() {
    
    Node* head = nullptr;

    insertNode(head, 12);
    insertNode(head, 13);
    insertNode(head, 14);
    insertNode(head, 15);
    insertNode(head, 16);
    insertNode(head, 17);
    insertNode(head, 18);

    display(head);

    cout<<"Number of Nodes: "<<count(head)<<endl;


    Node* temp = head;
    while(temp!=nullptr){
        Node* newnode = temp->link;
        delete temp;
        temp = newnode;
    }

    return 0;
}
