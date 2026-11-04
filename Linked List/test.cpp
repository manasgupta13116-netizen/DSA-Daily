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
private:
    Node *head;

public:
    List()
    {
        head = NULL;
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
            cout << "Value added successfully" << endl;
        }
    }

    void push_end(int value)
    {
        Node *newNode = new Node(value);
        Node *temp = head;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = NULL;

            cout << "Value added at the End successfully" << endl;
        }
    }

    void print_ll()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "Empty Linked List" << endl;
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }

    // Middle Element of the linked list

    void middle_ele(){
        if(head == NULL){
            return;
        }else{
            int counter = 0;
            Node* temp = head;
            while(temp != NULL){
                counter++;
                temp = temp->next;
            }   
            // calculating mid
            int mid = counter/2;
            temp = head;
            for(int i=0; i<mid; i++){
                 temp = temp->next;
            }
            cout<<"The Middle Element of the Linked List is: "<<temp->data;
        }
    }




};
int main()
{

    List ll;
    ll.push_front(10);
    ll.push_front(11);
    ll.push_end(19);
    ll.push_end(17);
    ll.print_ll();
    ll.middle_ele();
}