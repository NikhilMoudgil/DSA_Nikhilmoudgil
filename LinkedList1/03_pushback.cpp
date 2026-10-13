/*Pushback - INserts node in the last of the linked list

Node*newNOde` = new Node(val)
if head=null ->  head=tail=newNode
else   -> tail->nextr =newNode  and tail= newnode
// Printing  Linked lIst
Node * temp =head
while(temp!=NULL){
cout<< temp->data
temp=temp->next
}

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
