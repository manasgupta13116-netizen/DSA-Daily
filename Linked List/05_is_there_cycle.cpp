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


    void isCycle(int pos){
        Node*temp = head;
        int counter = 0;
        while(temp != NULL){
            temp = temp->next;
            counter++;      
        }

        for(int i=0; i<counter; i++){
            if(tail->next = counter)
        }
    }
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
    return 0;
}