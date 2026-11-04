#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next; // this means there is a pointer named next who store an address of another node that's why Node*

    Node(int value){
        data = value;
        next = NULL;
    }
};
int main() {

    Node* n1 = new Node(10);  // Creating the objects dynamically
    Node* n2 = new Node(12);
    Node* n3 = new Node(104);

    // Connecting the Nodes to each other
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    

    
    Node* head = n1;
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" "; 
        temp = temp->next;
    }
    return 0;
}