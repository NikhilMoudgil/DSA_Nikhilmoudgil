/*Linked List - It is a linear data structure where elements are not stored at contiguous
 memory locations. The elements in a linked list are linked using pointers. Each element of a linked list is called a node. 
 Each node consists of two parts: data and a pointer to the next node. The last node has a pointer to null.
  The entry point into a linked list is called the head of the list. If the list is empty, then the head is a null pointer.

  LL Implementation in C++ using classes and pointers. The following operations are implemented:
  1. Insertion at the beginning of the linked list.
  2. Insertion at the end of the linked list.
  3. Deletion from the beginning of the linked list.
  4. Deletion from the end of the linked list.
  5. Displaying the linked list.
  6. Searching for an element in the linked list.
  7. Counting the number of nodes in the linked list.
  8. Reversing the linked list.
  9. Sorting the linked list.
  10. Merging two linked lists.
  11. Detecting a loop in the linked list.

  Psudo Code  -> 
There are two types of implementing ll 
STL(Standard Template library)
Classes
 
WIth Classes 
Class Node -> data , node*
class Node{
 int data
 node* next
 }

Collection
 class list{
  Node* head;
  Node* tail;
 }
Operation 
Push back
Push front
pop back
pop front
*/

#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;
public:
  Node(int val){
    data=val;
    next = NULL;
  }

};

class List{
    Node* head;
    Node* tail;
public:
   list(){
    head=NULL;
    tail=NULL;

    void push_
   }
};

int main()
{ 

    List ll();
    return 0;
}