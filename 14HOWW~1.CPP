#include <iostream>
using namespace std;

// How would you implement the insertion of a new node at the end of a linked list in a C++ program, use AtEnd() function to add node at the end of the LinkedList, ensuring efficiency and considering potential edge cases? Please provide the necessary code and briefly explain the logic behind your implementation.

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

    delete head;

return 0;
}





