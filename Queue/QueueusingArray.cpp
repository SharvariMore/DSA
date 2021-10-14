#include<iostream>
using namespace std;

#define SIZE 10
int A[SIZE];
int rear=-1;
int front=-1;

bool isEmpty()
{
    if (rear==-1 && front==-1)
        return true;
    else
        return false;
}

void Enqueue(int value)
{
    if(rear==SIZE-1)
    {
        cout<<"\n Queue is Full!";
    }
    else
    {
        if(front==-1)
            front=0;
        rear++;
        A[rear]=value;
    }
}

void Dequeue()
{
    if(isEmpty())
    {
        cout<<"\n Queue is Empty!";
    }
    else
    {
        if(front==rear)
            front=rear=-1;
        else
            front++;
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
        cout<<"\n Top element is :"<<A[front]<<"";
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
        for(int i=front;i<=rear;i++)
        cout<<"\n Queue elements are :"<<A[i]<<"";
        cout<<"\n";
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