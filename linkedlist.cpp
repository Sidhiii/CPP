#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
//linked list is dynamic
//easy to insert n delete
//but array has less memory loss

class node{
    public:
    node(int value)
    {
        this->data = value;  //we use this to assign the value of the object in the class to the parameter of the constructor (value). 
        next=NULL;
    }
    int data;  //data of the node
    node *next; //address of next node

};

node *head=NULL; //stores the address of first node
node *tail = NULL;

void append(int value)
{
    if(head==NULL)  //list is empty
    {
        head = new node(value);
        tail = head; //if there is only one node, it is the head awa the tail
    }
    else
    {
        tail->next = new node(value);
        tail = tail->next;
    }
}

void print(node *head)
{
    while(head!=NULL){
        cout<<head->data;
        head= head->next;
        cout<<" ";
    }
}

// void printreverse(node *currnode)
// {
//     if(currnode==NULL)
//     {
//         return;
//     }
//     printreverse(currnode->next);
//     cout<<currnode->data<<" ";
// }
// void deletenode(node * &head,int value)
// {
//     node *temp = head;
//     while(temp->next->data!=value)
//     {
//         temp=temp->next;
//     }
//     node *todelete=temp->next;
//     temp->next=temp->next->next;
//     delete todelete;
// }
// void insertbegin(int value)
// {
//     node *temp= new node(value);
//     if(head==NULL)
//     {
//         head = temp; 
//         tail = head;
//     }
//     temp->next=head;
//     head=temp;
// }
// void insertAtPosition(int data, int n)
// {
//     node *temp1= new node(data);
//     node *temp2= head;
//     for(int i=0;i<n-1;i++)
//     {
//         temp2=temp2->next; //traverse till we reach n-1 position
//     }
//     temp1->next=temp2->next;
//     temp2->next=temp1;
// }
// void sumLast(node *head, int *n, int *sum) //making a sum of n nodes function
// {
//     if(head==NULL)
//     {
//         return;
//     }
//     sumLast(head->next, n, sum); //traverse to head->next till n nodes
//     if(*n>0) // number of nodes is greater than zero
//     {
//         *sum=*sum+head->data;
//         --*n; //reduce node count
//     }
// }
// int sumLastUtil(node *head, int n) //using the sum of n nodes function
// {
//     if(n==0){
//         return 0;
//     }
//     int sum=0;
//     sumLast(head, &n, &sum);
//     return  sum;
// }
void insertsort(int value)
{
    node *newnode = new node(value);
    newnode->next=NULL;
    //1st case
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    //2nd case
    if(head->data>newnode->data)
    {
        newnode->next=head;
        head=newnode;
        return;
    }
    //3rd case
    node *curr=head;
    while(curr->next!=NULL)
    {
    if(curr->next->data>newnode->data)
    {
        newnode->next=curr->next;
    curr->next=newnode;
    return;
    }
    curr=curr->next; //this means we have to traverse till curr->next==null
}
curr->next=newnode;
return;
}
// void deletedup(struct node* head)
// {
//     struct node *ptr1, *ptr2, *dup;
//     ptr1 = head;
 
//     
//     while (ptr1 != NULL && ptr1->next != NULL) {
//         ptr2 = ptr1;
 
//        
//         while (ptr2->next != NULL) {
//            
//             if (ptr1->data == ptr2->next->data) {
//                
//                 dup = ptr2->next;
//                 ptr2->next = ptr2->next->next;
//                 delete (dup);
//             }
//             else 
//                 ptr2 = ptr2->next;
//         }
//         ptr1 = ptr1->next;
//     }
// }
node *reverseK(node * &head, int k)
{
    node *prevptr=NULL;
    node *currptr=head;
    node *nextptr;
    int count =0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=prevptr;
        count ++;
    }
    if(nextptr!=NULL)
    {
        head->next = reverseK(nextptr, k);
    }
    return prevptr;
}
int main()
{
    
    append(10);
    append(20);
    append(20);
    append(40);
    append(50);
    append(60);
    append(70);
    //deleteDup(head);
    print(head);  
    // int k=2;
    // node *newhead= reverseK(head, k);
    // print(newhead);
    insertsort(80);
    //insertbegin(5);
    print(head);
   //insertAtPosition(31,3);
   // cout<<endl;
    //deletenode(head,40);
    //print(head);
    // cout<<endl;
    // print(head);
    //printreverse(head);
    //sumLastUtil(head,3);
    return 0;
}