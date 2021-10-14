#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *top=NULL;

bool isEmpty()
{
    if (top==NULL)
        return true;
    else
        return false;
}

void Push(int value)
{
    Node *ptr = new Node();
    ptr->data = value;
    ptr->link = top;
    top = ptr;
}

void Pop()
{
    if(isEmpty())
    {
        cout<<"\n Stack is Empty!";
    }
    else
    {
        Node *ptr = top;
        top = top->link;
        delete(ptr);
    }
}

void Top()
{
    if(isEmpty())
    {
        cout<<"\n Stack is Empty!";
    }
    else
    {
        cout<<"\n Top element is :"<<top->data<<"";
    }
}

void Display()
{
    if(isEmpty())
    {
        cout<<"\n Stack is Empty!";
    }
    else
    {
        Node *temp = top;
        while (temp!=NULL)
        {
            cout<<"\n Stack elements are :"<<temp->data<<"";
            temp = temp->link;
            
        }
        cout<<"\n";
    }
}

int main()
{
    int choice,flag=1,value;
    while (flag==1)
    {
        cout<<"\n Enter your choice :";
        cout<<"\n1.Push \n2.Pop \n3.Top \n4.Display \n5.Exit";
        cin>>choice;
        switch (choice)
        {
        case 1: 
            cout<<"\n Enter value: ";
            cin>>value;
            Push(value);
            break;

        case 2:
            Pop();
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
        

