#include <iostream> 
using namespace std;

// You are given a singly linked list and an integer k. Write a C++ function to reverse every k nodes in the linked list. If the linked list is not a multiple of k, then leave the remaining nodes as they are.
// Input for k=3:
// head = 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> nullptr

// Output:
// 3 -> 2 -> 1 -> 6 -> 5 -> 4 -> 7 -> 8 -> nullptr


class Node{
public: 
    int data;
    Node* link;
    Node(int value){
        data = value;
        link = nullptr;
    }
};

void display(Node*& head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp = temp->link;
    }
}

void insertNode(Node*& head, int value){
    Node* newnode = new Node(value);

    if(head == NULL){
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp->link != NULL){
        temp = temp->link;
    }
    temp->link = newnode;
}

Node* reverseKnodes(Node*& head, int k){
    Node* previous = nullptr;
    Node* curent = head;
    Node* next = nullptr;
    int count=0;
    
    while(curent!=nullptr && count<k){
        next = curent->link;
        curent->link = previous;

        previous = curent;
        curent = next;
        count++;
    }
    if(next != nullptr)
        head->link = reverseKnodes(next, k);

    return previous;
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
    Node* newhead = reverseKnodes(head, 3);
    display(newhead);

return 0;
}