/*Insert In  middle
1. create new node 
2. find node position-1(loop)
(a) newNode-> next= prev-> next
(b) temp->next=newNode



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
    ll.insertInMiddle(100,2);
    ll.printlist();
    return 0;
}
