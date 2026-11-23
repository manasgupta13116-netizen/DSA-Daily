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
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    // Stack Functions


    void push(int value) // Similar to Insertingat the beginning
    {
        Node *newNode = new Node(value);
        Node *top = head;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *newNode = new Node(value);
            newNode->next = head;
            head = newNode;
        }
    }

    void pop() {
        Node*temp = head;
        if(head == NULL){
            cout<<"Oops!! Empty Stack"<<endl;
        }else{
            head = head->next;
            delete temp;
        }
    }

    void peek(){
        if(head == NULL){
            cout<<"Stack is Empty"<<endl;
        }
        cout<<"The "<<head->data<<" is at the top"<<endl;
    }

    void isEmpty(){
        if(head == NULL){
            cout<<"The Stack is Empty"<<endl;
        }else{
            cout<<"No the Stack contains some values you can use print_stack function to vew them"<<endl;
        }
}
    
    void print_stack()
    {
        Node *top = head;
        if (head == NULL)
        {
            return;
        }
        else
        {
            while (top != NULL)
            {
                cout << top->data;
                top = top->next;
                cout << endl;
            }
        }
    }
};

int main()
{

    List ll;
    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(4);
    // ll.print_stack();
    ll.pop();
    ll.pop();
    ll.print_stack();
    ll.pop();
    ll.peek();
    ll.isEmpty();
}
