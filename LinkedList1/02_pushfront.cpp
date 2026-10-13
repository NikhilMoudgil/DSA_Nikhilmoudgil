/* Pushfront in Linked list
Head Pointer is always given in question
Next node's next pointer should point to head pointer of the first node as
Two cases->  ll empty or ll has elements
1.(newNode) Node* newNode=new Node(val)
2. newNode-> next=head;
3. head =new Node

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
    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamic
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
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
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(1);
    ll.printlist();
    return 0;
}
