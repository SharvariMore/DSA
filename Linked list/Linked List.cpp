#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node* next;
};

struct Node* head;
void Insert(int x)
{
    Node* temp = new Node();
    temp->data=x;
    temp->next=head;
    head=temp;   
}

void Insert_inbetween(int data, int n)
{
    Node* temp1 = new Node();
    temp1->data=data;
    temp1->next=NULL;
    
    if (n==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    Node* temp2=head;
    for (i = 0; i < n-2; i++)
    {
    temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    
}

void Delete(int n)
{
    struct Node* temp1 = head;
    {
        head=temp1->next;
        free(temp1);
        return;
    }
    int i;
    for (i = 0; i < n-2; i++)
    temp1=temp1->next;

    struct Node* temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
    
}

void Print()
{
    struct Node* temp=head;
    while(temp!=NULL)
    cout <<"List is :";
    {
       cout<<temp->data;
        temp=temp->next;
    }
    cout <<"\n";
}

void Insert(int x);
void Insert_inbetween(int data, int n);
void Delete(int n);
void Print();
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
    Insert(x);
    Insert_inbetween(data,n);
    Delete(n);
    Print();
    }
}
