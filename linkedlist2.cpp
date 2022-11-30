#include<iostream>
using namespace std;
class LinkedList
{
  public:
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

  void insertAtBegin(int value)
  {
    Node *newNode = new Node(value);
    //if linked list is empty
    if(HEAD==NULL){
        HEAD=newNode;
        TAIL=HEAD;
    }
    //making a new node to store the address of head node
    newNode->next=HEAD;
    //make the new node as the head node
    HEAD=newNode;
  }

  void printList()
  {
    Node *currNode = HEAD;
    while (currNode!=NULL)
    {
      cout<<currNode->data<<" ";
      currNode = currNode->next;
    }
  }

  void printRev(Node *currNode)
  {
    if(currNode==NULL)
    {
      return;
    }
    printRev(currNode->next); // control returns here
    cout<<currNode->data<<" ";
  }
  void deleteNode(int value) 
  {
    //find the node with the value
    Node *currNode = HEAD;
    Node *prevNode = NULL;
    while(currNode!=NULL)
    {
      if(currNode->data==value)
      {
        break;
      }
      prevNode=currNode;
      currNode= currNode->next;
    }
    if(currNode==HEAD)//if the first node is to be deleted
    {
      HEAD=HEAD->next;
      return;
    }
  if(currNode!=NULL)
  {
    cout<<"\n Value present\n Current node: "<<currNode->data<<"\nPrevious Node: "<<prevNode->data;
    //make prev node to store the address of next node
    prevNode->next=currNode->next;
    cout<<"\nAfter Deletion";
    printList();
  }
  else{
    cout<<"\nValue not present";
  }
  }
};


int main() 
{
  LinkedList *myList1 = new LinkedList();
  myList1->append(10);
  myList1->append(20);
  myList1->append(30);
  myList1->append(40);
  myList1->append(50);
  myList1->append(60);
  // cout<<"\nInsert 77 at beginning ";
  // myList1->insertAtBegin(77);
  cout<<endl;
  cout<<"List : ";
  myList1->printList();
  cout<<"\nRev List : ";
  myList1->printRev(myList1->HEAD);
  cout<<"\nAfter deletion: ";
  myList1->deleteNode(10);
  myList1->printList();
  
  return 0;
}