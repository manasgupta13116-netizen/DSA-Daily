#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class List
{

    Node *head;

    public:
    List()
    {
        head = NULL;
    }

    // Push front
    void push_front(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            return;
        } else{
            newNode->next = head;
            head = newNode;
        }
        cout<<value<<" Pushed Successfully"<<endl;
    }


    // Traverse 
    void print(){
        Node*temp = head;
        
        if(head == NULL){
            return;
        } else{
            while(temp != NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
    }

    void del(int value){

    }

};

int main()
{

    List ll;

    ll.push_front(12);
    ll.print();
    return 0;
}