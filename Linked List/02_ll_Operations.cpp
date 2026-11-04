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

class list
{
    Node *head;
    Node *tail;

public:
    list()
    {
        head = tail = NULL;
    }

    // Insert at the front
    void push_front(int value)
    {
        Node *newNode = new Node(value); // for creating a Node
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        // cout<<"value Added Successfully"<<endl;
    }

    // Insert at the End
    void push_back(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            Node *temp = head; // a variable/pointer named "temp"
            while (temp->next != NULL)
            {
                // temp = (*temp).next; instead of writing this we write this
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = NULL;
        }
    }

    // Inserting Element at any position
    void insert_postion(int value, int pos)
    {
        Node *newNode = new Node(value);
        Node *temp = head;

        if (pos < 0)
        {
            cout << "Invalid Position" << endl;
            return;
        }

        if (pos == 1)
        {
            push_front(value);
        }
        else
        {
            for (int i = 1; i < pos - 1; i++)
            {
                if(temp == NULL){
                    cout<<"Position Out of Bound";
                    return;
                } else{
                    temp = temp->next;
                }
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    // Removing Element from the front
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "ll is Empty" << endl;
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Removing Element from End
    void pop_End()
    {
        Node *temp = head;
        if (head == NULL)
        {
            return;
        }
        else
        {
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = NULL;
        }
    }

    // Removing any Element by it's value
    void remove_val(int value)
    {
        Node *temp = head;
        if (head == NULL)
        {
            return;
        }
        else
        {
            while (value != temp->next->data)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp = temp->next;
            free(temp);
        }
    }

    // Searching an element in linked list
        void search_ele(int value){
            Node*temp = head;
            if(head == NULL){
                cout<<"Empty LL No elements to search"<<endl;
            } else{
                int idx = 1;
                while(temp != NULL){
                    if(temp->data == value){
                        return idx++;
                    } else{
                        temp = temp->next;
                        cout<<"Element Not Found"<<endl;
                    }
                }
                cout<<value<<" is at "<<idx<<" Index"<<endl;
                return;

            }

        }

    // Print head
    void print_head()
    {
        cout << head->data;
    }

    // Printing the linked list
    void print_ll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};
int main()
{
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    // ll.insert_postion(19, 7);
    ll.print_ll();
    ll.search_ele(2);
}