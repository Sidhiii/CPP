#include<iostream>
using namespace std;

class Node
{
  public: 
  Node(int value)
  {
    data = value;
  }
  int data;
  Node *next = NULL;
};

class LinkedList
{
  public:
  Node *HEAD = NULL; // store the address of the fist node of the LL 
  Node *TAIL = NULL; // Store the address of the last node of the LL 
 
  void append(int value)
  {
    Node *temp = new Node(value);
    if(HEAD==NULL)// if LL is empty or not 
    {
      HEAD = temp; // make the new node as HEAD Node
      TAIL = HEAD;
    }
    else
    {
      TAIL->next = temp;
      TAIL = TAIL->next;
    }
  }

  void printList()
  {
    cout<<"List : ";
    Node *currNode = HEAD;
    while (currNode!=NULL)
    {
      cout<<currNode->data<<" ";
      currNode = currNode->next;
    }
  }

}; 

Node* findMid(Node* HEAD)
{
  Node *slow = HEAD;
  Node *fast = HEAD;

  while(fast->next!=NULL && fast->next->next!=NULL )
  {
    slow = slow->next; // jumps one node at a time
    fast = fast->next->next; // jumps two nodes at a time
  }
  return  slow; // should point to the middle node 
}

Node* merge(Node* head1 , Node* head2) // merges linkedLists that start at head1 and head2 resp
{
  Node* minNode = NULL;
  if(head1==NULL)
  {
    return head2;
  }
  if(head2==NULL)
  {
    return head1;
  }
  // check the first nodes of both linkedList
  if(head1->data<head2->data)
  {
    minNode = head1;
    minNode->next = merge(head1->next,head2);
  }
  else
  {
    minNode = head2;
    minNode->next = merge(head1,head2->next);
  }
  return minNode;
}

int main() 
{
  LinkedList myList1;
  myList1.append(1);
  myList1.append(3);
  myList1.append(5);
  myList1.append(7);
  myList1.append(9);

  LinkedList myList2;
  myList2.append(2);
  myList2.append(4);
  myList2.append(6);
  myList2.append(8);
  
  cout<<"LinkedList 1: ";
  myList1.printList();
  
  cout<<"\nLinkedList 2: ";
  myList2.printList();

  LinkedList MergedLinkedList;
  MergedLinkedList.HEAD = merge(myList1.HEAD,myList2.HEAD);
  cout<<"\nMerged LinkedList : ";
  MergedLinkedList.printList();
}