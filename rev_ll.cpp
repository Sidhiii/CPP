#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        this->data = value;
        next = NULL;
    }
};
node *head = NULL;
node *tail = NULL;

void append(int value)
{
    if (head == NULL)
    {
        head = new node(value);
        tail = head;
    }
    else
    {
        tail->next = new node(value);
        tail = tail->next;
    }
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
        cout << " ";
    }
}
void printrev(node *head)
{
   if(head==NULL)
   {
    return;
   }
 printrev(head->next);
 cout<<head->data<<" ";
}
int main()
{
    append(20);
    append(30);
    print(head);
    cout<<endl;
    printrev(head);
    return 0;
}


/*
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node(int value)
    {
        this->data=value;
        next = NULL;
    }
};
node *head=NULL;
node *tail=NULL;

void append(int value)
{
    if(head==NULL)
    {
        head = new node(value);
        tail=head;
    }
    else
    {
        tail->next = new node(value);
        tail=tail->next;
    }
}
void insertbegin(int value)
{
    node *curr = new node(value);
    if(head==NULL)
    {
        head=curr;
        tail=head;
    }
    curr->next=head;
    head=curr;
}
void print(node *head)
{
   while(head!=NULL)
   {
       cout<<head->data;
       head=head->next;
       cout<<" ";
   }
}
void printrev(node *head)
{
    if(head==NULL)
    {
        return;
    }
    printrev(head->next);
    cout<<head->data;
    cout<<" ";
}
void deletenode(node* &head, int val)
{
    node *temp = head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    void *todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
int main()
{
    append(10);
    append(20);
    insertbegin(5);
    print(head);
    cout<<"\n";
    printrev(head);
    cout<<"\n";
    deletenode(head, 10);
    print(head);
}
*/