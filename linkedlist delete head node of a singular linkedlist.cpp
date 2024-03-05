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
    Node(){
        link = NULL;
    }
};

void display(Node* &node){

    Node* temp = node;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->link;
    }cout<<endl;
}

void insertAtTail(Node* &head, int value){

    Node* newnode = new Node(value);
    Node* temp = head;
    while(temp->link != nullptr){
        temp = temp->link;
    }
    temp->link = newnode;
}

void deleteNodeWhereValue(Node* &head, int value){

    Node* temp = head;

    while(temp->link->data != value){

        temp = temp->link;
    }
    temp->link = temp->link->link;
}

void deleteheadNode(Node*& head, int value){
    Node* temp = head;

    head = head->link;
    delete temp;
}


int main() {

    Node* node1 = new Node();
    node1->link = NULL;
    node1->data = 12;

    Node* node2 = new Node();
    node2->data = 13;
    node2->link = NULL;
    node1->link = node2;

    Node* node3 = new Node();
    node3->data = 14;
    node3->link = NULL;
    node2->link = node3;

    Node* node4 = new Node();
    node4->data = 15;
    node4->link = NULL;
    node3->link = node4;

    insertAtTail(node1, 16);

    display(node1);

    deleteheadNode(node1, 12);

    display(node1);

    


    delete(node1);
    delete(node2);
    delete(node3);
    delete(node4);

    return 0;
}








