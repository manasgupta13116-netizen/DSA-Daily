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

    void push_front(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void print_ll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }   
        cout<<"NULL"<<endl;
    }

    bool isCycle(int pos){
        int counter = 0;
        Node* temp = head;
        Node* tail = head;
        string isit;
        if(head == NULL){
            return;
        }else{
            while(tail->next != NULL){
                tail = tail->next;
            }

            while(counter<= pos){
                counter++;
                temp = temp->next;
            }
            if(tail->next == temp){
                 isit = "True";
            }else{
                 isit = "False";

            }
        }

        cout<<isit<<endl;
    
};

int main()
{

    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    ll.push_front(50);
    ll.push_front(60);
    ll.push_front(70);
    ll.push_front(80);
    ll.print_ll();
    ll.isCycle(2);
    return 0;
}