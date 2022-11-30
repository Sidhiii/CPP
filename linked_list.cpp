#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

//constructing a node
class node{
    public:
    int data;
    node* next;
    //constructor
    node(int data){
        this -> data=data;
        this -> next = NULL;
    }

    //destructor
    ~node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
            
        }
    }
};

void inserthead(node* &head, int d)   //idhar &head ka refrence lia cuz we want ki function same list mai ho na ki navi list mai
{
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void inserttail(node* &tail,int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = tail ->next;
}
void print(node* &head){
    node* temp= head;

    while(temp!=NULL){
        cout<<  temp -> data<<" ";
        temp = temp ->next;
    }
}

void insertmid(node* &tail,node* &head, int position, int d){
    if(position==1){
        inserthead(head, d);
        return;
    }

    node* temp = head;
    int cnt = 1;
    while(cnt <position-1){
        temp = temp -> next;
        cnt ++;

    }

    if(temp ->next ==NULL){
        inserttail(tail, d);
        return;

    }
      node* inmid = new node(d);
      inmid -> next = temp -> next;
      temp->next = inmid;
}

void deletenode(node* &head, int position){
   if(position ==1){
    node*temp= head;
    head=head->next;
    temp->next=NULL;
    delete temp;
   }
   else{
    node*curr=head;
    node*prev=NULL;

    int cnt = 1;
    while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt ++;
    }
    prev->next = curr->next;
    curr->next=NULL;
    delete curr;
   }
}

int main()
{
    node* n1= new node(10);
    // cout<<n1 -> data<<endl;
    // cout<<n1 -> next<<endl;

    node* head = n1;
    node* tail = n1;
    print(tail);
    cout<<endl;
    inserttail(tail, 12);
    print(head);
    cout <<endl;
    inserttail(tail, 15);
    print(head);
    cout<<endl;

    insertmid(tail,head, 3, 22);
    print(head);
    cout<<endl;

    deletenode(head, 2);
    print(head);
     

    return 0;
}