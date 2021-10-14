#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *front=NULL;
Node *rear=NULL;

bool isEmpty()
{
    if(front==NULL & rear==NULL)
        return true;
    else
        return false;
}

void Enqueue(int value)
{
    Node *ptr = new Node();
    ptr->data = value;
    ptr->link = NULL;

    if(front==NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->link = ptr;
        rear = ptr;
    }
}

void Dequeue()
{
    if(isEmpty())
     cout<<"\n Queue is Empty!";
     else
     if(front==rear)
     {
         free(front);
         front = rear = NULL;
     }
     else
     {
         Node *ptr = front;
         front = front->link;
         free(ptr);
     }
}

void Top()
{
    if(isEmpty())
    {
        cout<<"\n Queue is Empty!";
    }
    else
    {
        cout<<"\n Top element is :"<<front->data<<"";
    }
}

void Display()
{
    if(isEmpty())
    {
        cout<<"\n Queue is Empty!";
    }
    else
    {
        Node *ptr = front;
        while(ptr!=NULL)
        {
            cout<<"\n Queue elements are :"<<ptr->data<<"";
            ptr=ptr->link;
        }
    }
}

int main()
{
    int choice,flag=1,value;
    while (flag==1)
    {
        cout<<"\n Enter your choice :";
        cout<<"\n1.Enqueue \n2.Dequeue \n3.Top \n4.Display \n5.Exit";
        cin>>choice;
        switch (choice)
        {
        case 1: 
            cout<<"\n Enter value: ";
            cin>>value;
            Enqueue(value);
            break;

        case 2:
            Dequeue();
            break;

        case 3:
            Top();
            break;

        case 4:
            Display();
            break;

        case 5:
            flag=0;
            break;
    
    
        default:
            cout<<"\n Enter some choice!";
            break;
        }
    }
    return 0;
}