#include<iostream>
using namespace std;

#define SIZE 10
int A[SIZE];
int top=-1;

bool isEmpty()
{
    if (top==-1)
        return true;
    else
        return false;
}

void Push(int value)
{
    if(top==SIZE-1)
    {
        cout<<"\n Stack is Full!";
    }
    else
    {
        top++;
        A[top]=value;
    }
}

void Pop()
{
    if(isEmpty())
    {
        cout<<"\n Stack is Empty!";
    }
    else
    {
        top--;
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
        cout<<"\n Top element is :"<<A[top]<<"";
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
        for(int i=0;i<=top;i++)
        cout<<"\n Stack elements are :"<<A[i]<<"";
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