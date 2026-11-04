#include <iostream>
using namespace std;
class Node{
public:
int data;
Node*next;
    
Node(int value){
    data = value;
    next = NULL;
}
};

class list{
    Node*head;
    Node*tail;
public:
    list(){
        head = tail = NULL;
    }

    void insert_start(int value){
        Node* newNode = new Node(value);

        if(head == NULL){
            head = tail = newNode;
            return;
        } else{
                newNode->next = head;
               head = newNode;
        }
    }

     
// Reversing a Linked List
    void reverse(Node* head){
        Node* current = head;
        Node* prev = NULL;
        // Node* forward = current->next;
        Node* forward = NULL;
        
        if(head == NULL){
            return;
        } else{
            while(current != NULL){
                forward = current->next;
                prev = current;
                current = forward;
                current->next = prev;
                
            }
            return prev;
        }
    }

    void print_ll()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL";
    }
};

int main() {
    list ll;

    ll.insert_start(10);
    ll.insert_start(20);
    ll.insert_start(30);
    ll.print_ll();
    ll.reverse();
    ll.print_ll();

    return 0;
    }