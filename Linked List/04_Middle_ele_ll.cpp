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

// By Brut Force Method
    void middle_ele(){
        Node* temp = head;
        int count = 0;

        if(head == NULL){
            return;
        }else{

        // Length of linked list
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
    }


        int mid = (count/2) ;
        temp = head;

       for(int i=0; i<mid; i++){
        temp = temp->next;
       }

       cout<<"The Middle Element of the linked list is: "<<temp->data<<endl;
    }

// Middle of Linked List using  Slow Pointer Method
void middle_ele_slow(){
    Node*slow = head;
    Node* fast = head;

    if(head == NULL){
        return;
    }else{
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        cout<<slow->data<<endl;
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
    // ll.middle_ele();
    ll.middle_ele_slow();
    return 0;
}