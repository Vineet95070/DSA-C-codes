#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* link;
};


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

    cout<<node1->data<<"  "<<node1->link<<endl;
    cout<<node2->data<<"  "<<node2->link<<endl;
    cout<<node3->data<<"  "<<node3->link<<endl;
    cout<<node4->data<<"  "<<node4->link<<endl;

    delete(node1);
    delete(node2);
    delete(node3);
    delete(node4);

    return 0;
}








