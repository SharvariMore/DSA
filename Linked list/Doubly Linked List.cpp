#include <iostream>
using namespace std;

// node creation
struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
};

// insert node at the front
void insertFront(struct Node** head, int data) {
  // allocate memory for newNode
  struct Node* newNode = new Node;

  // assign data to newNode
  newNode->data = data;

  // make newNode as a head
  newNode->next = (*head);

  // assign null to prev
  newNode->prev = NULL;

  // previous of head (now head is the second node) is newNode
  if ((*head) != NULL)
    (*head)->prev = newNode;

  // head points to newNode
  (*head) = newNode;
}

// insert a node after a specific node
void insertAfter(struct Node* prev_node, int data) {
  // check if previous node is null
  if (prev_node == NULL) {
    cout << "previous node cannot be null";
    return;
  }

  // allocate memory for newNode
  struct Node* newNode = new Node;

  // assign data to newNode
  newNode->data = data;

  // set next of newNode to next of prev node
  newNode->next = prev_node->next;

  // set next of prev node to newNode
  prev_node->next = newNode;

  // set prev of newNode to the previous node
  newNode->prev = prev_node;

  // set prev of newNode's next to newNode
  if (newNode->next != NULL)
    newNode->next->prev = newNode;
}

// insert a newNode at the end of the list
void insertEnd(struct Node** head, int data) {
  // allocate memory for node
  struct Node* newNode = new Node;

  // assign data to newNode
  newNode->data = data;

  // assign null to next of newNode
  newNode->next = NULL;

  // store the head node temporarily (for later use)
  struct Node* temp = *head;

  // if the linked list is empty, make the newNode as head node
  if (*head == NULL) {
    newNode->prev = NULL;
    *head = newNode;
    return;
  }

  // if the linked list is not empty, traverse to the end of the linked list
  while (temp->next != NULL)
    temp = temp->next;

  // now, the last node of the linked list is temp

  // assign next of the last node (temp) to newNode
  temp->next = newNode;

  // assign prev of newNode to temp
  newNode->prev = temp;
}

// delete a node from the doubly linked list
void deleteNode(struct Node** head, struct Node* del_node) {
  // if head or del is null, deletion is not possible
  if (*head == NULL || del_node == NULL)
    return;

  // if del_node is the head node, point the head pointer to the next of del_node
  if (*head == del_node)
    *head = del_node->next;

  // if del_node is not at the last node, point the prev of node next to del_node to the previous of del_node
  if (del_node->next != NULL)
    del_node->next->prev = del_node->prev;

  // if del_node is not the first node, point the next of the previous node to the next node of del_node
  if (del_node->prev != NULL)
    del_node->prev->next = del_node->next;

  // free the memory of del_node
  free(del_node);
}

void deleteNodeAtGivenPos(struct Node** head_ref, int n)
{
    /* if list in NULL or invalid position is given */
    if (*head_ref == NULL || n <= 0)
        return;
 
    struct Node* current = *head_ref;
    int i;
 
    /* traverse up to the node at position 'n' from
       the beginning */
    for (int i = 1; current != NULL && i < n; i++)
        current = current->next;
 
    /* if 'n' is greater than the number of nodes
       in the doubly linked list */
    if (current == NULL)
        return;
 
    /* delete the node pointed to by 'current' */
    deleteNode(head_ref, current);
}

int search(Node** head_ref, int x)
{
 
    // Stores head Node
    Node* temp = *head_ref;
 
    // Stores position of the integer
    int pos = 0;
 
    // Traverse the doubly linked list
    while (temp->data != x
           && temp->next != NULL) {
 
        // Update pos
        pos++;
 
        // Update temp
        temp = temp->next;
    }
     // If the integer not present in the doubly linked list
    if (temp->data != x)
        return -1;
 
    // If the integer present in the doubly linked list
    return (pos + 1);
}

void reverse(Node **head_ref)
{
    Node *temp = NULL;
    Node *current = *head_ref;
     
    /* swap next and prev for all nodes of
    doubly linked list */
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;            
        current = current->prev;
    }
     
    /* Before changing the head, check for the cases like empty
        list and list with only one node */
    if(temp != NULL )
        *head_ref = temp->prev;
}

// print the doubly linked list
void displayList(struct Node* node) {
  struct Node* last;

  while (node != NULL) {
    cout << node->data << "->";
    last = node;
    node = node->next;
  }
  if (node == NULL)
    cout << "NULL\n";
}



int main() {
  // initialize an empty node
  struct Node* head = NULL;
  int choice,flag=1,item,data,n,X;
  while (flag==1)
  {
    cout<<"\n1.INSERT\n2.DELETE\n3.SEARCH\n4.DISPLAY\n5.REVERSE\n6.EXIT";
    cout<<"\n Enter your choice : ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        int choice;
        cout<<"\n1.Insert at Beginning\n2.Insert in Between\n3.Insert at End";
        cout<<"\n Enter your choice : ";
        cin>>choice;
        switch (choice)
        {
            case 1:
            cout<<"\n Enter a node to insert: ";
            cin>>data;
            insertFront(&head, data);
            break;
        
            case 2:
            cout<<"\n Enter a node to insert: ";
            cin>>data;
            insertAfter(head->next, data);
            break;

            case 3:
            cout<<"\n Enter a node to insert: ";
            cin>>data;
            insertEnd(&head, data);
            break;
        }
        break;

        case 2:
            cout<<"\n Enter position of node to delete: ";
            cin>>n;
            deleteNodeAtGivenPos(&head, n);
            break;

        case 3:
            cout<<"\n Enter node to search: ";
            cin>>X;
            if (search(&head, X)) {
                cout << endl << X << " is found";
            } 
            else 
            {
            cout << endl << X << " is not found";
            }
            break;

        case 4:
            cout<<"\n Linked List is : ";
            displayList(head);
            break;
            
        case 5:
            cout<<"\n Reverse Linked List is : ";
            reverse(&head);
            displayList(head);
            break;

        case 6:
            flag=0;
            break;
  
    default:
      cout<<"\n Enter some choice!";
      break;
    }
  }
  return 0;
}
