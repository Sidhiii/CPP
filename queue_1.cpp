#include <iostream>
#include <algorithm>
using namespace std;

class Queue
{
    int *arr;
    int front= -1;
    int rear= -1;
    int size;
    public:
    Queue(int s)
    {
        size=s;
        arr = new int[s];
    }
    void enqueue(int value)
    {
        if(rear==size-1)
        {
            cout<<"\nOverflow"<<endl;
            return;
        }
        if(rear==-1)
        {
            front++;
        }
        rear++;
        arr[rear]=value;

    }
    int dequeue()
    {
        if(front==-1 || front>rear)
        {
            cout<<"\nUnderflow"<<endl;
            return -1;
        }
        int deqVal = arr[front];
        front++;
        return deqVal;
    }

    void printQueue()
    {
        if(front>rear)
        {
            cout<<"empty like you"<<endl;
        }
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    int size=5; //size of queue
    Queue myQueue(size);
    int choice;
    while(true)
    {
        cout<<"\n1. Enqueue \n2. Dequeue"<<endl;
        cin>>choice;
        if(choice==1)
        {
            int value;
            cin>>value;
            myQueue.enqueue(value);
            myQueue.printQueue();
        }
        else{
            if(choice==2)
            {
                cout<<"\n dequeued value: "<<myQueue.dequeue()<<endl;
                myQueue.printQueue();
            }
            else{
                return 0;
            }
        }
    }
    myQueue.enqueue(10);
    return 0;
}