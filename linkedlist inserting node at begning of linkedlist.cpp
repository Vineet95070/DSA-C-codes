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
        cout<<temp->data<<"  "<<temp->link<<endl;
        temp = temp->link;
    }
}

void insertAtHead(Node* &head, int value){

    Node* temp = new Node(value);
    temp->data = value;
    temp->link = head;
    head = temp;
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

    insertAtHead(node1, 11);

    display(node1);

    delete(node1);
    delete(node2);
    delete(node3);
    delete(node4);


    // cout<<node1->data<<"  "<<node1->link<<endl;
    // cout<<node2->data<<"  "<<node2->link<<endl;
    // cout<<node3->data<<"  "<<node3->link<<endl;
    // cout<<node4->data<<"  "<<node4->link<<endl;

    return 0;
}








