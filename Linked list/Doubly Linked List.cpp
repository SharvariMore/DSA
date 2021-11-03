#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head;
void GetNewNode(int x)
{
    Node* newNode = new Node();
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode   
}

void InsertatHead(int x)
{
    struct Node * newNode=GetNewNode(x);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    else
    {
        head->prev=newNode;
        newNode->next=head;
        newNode=head;
    }    
}

void Print()
{
    struct Node * temp=head;
    cout<<"Forward as :";
    if(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<"\n";
}

void ReversePrint()
{
    struct Node * temp=head;
    if(temp==NULL) return;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    cout<<"Reverse as :";
    if(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->prev;
    }
    cout<<"\n";
}

int main()
{
    head=NULL;
    int n,i,x;
    cout <<"How many numbers :";
    cin >>n;
    for (i = 0; i < n; i++)
    {
    cout <<"Enter number :";
    cin >>x;
    cout<<"Enter a position :";
    cin>>n;
    GetNewNode(x);
    InsertatHead(x);
    Print();
    ReversePrint();
}
