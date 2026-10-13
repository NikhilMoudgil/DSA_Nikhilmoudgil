/*Nodes created  dynamically  will be deleted using destructors
We need to delete Node and List via destructors
~list
~Node1
~Node2
~Node3
null
*/
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
    ~Node(){
        cout<<"~Node"<< data <<endl;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    ~List(){
        cout<< "~list\n";
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val); // dynamic
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void insertInMiddle(int val,int pos){
        Node* newNode=new Node(val);
        Node* prev= head;
        for(int i=0;i<pos-1;i++){
            if(prev==NULL){
                cout<<"position is Invalid";
                return;
            }
            prev=prev->next;
        }
        //prev points to previous node
        newNode->next=prev->next;
        prev->next=newNode;
    }
    void printlist()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{

    List ll;
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(1);
    ll.printlist();
    return 0;
}
