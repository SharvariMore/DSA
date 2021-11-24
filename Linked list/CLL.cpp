// C++ code to perform circular linked list operations

#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node* next;
};

struct Node* addToEmpty(struct Node* last, int data) {
  if (last != NULL) return last;

  // allocate memory to the new node
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  // assign data to the new node
  newNode->data = data;

  // assign last to newNode
  last = newNode;

  // create link to itself
  last->next = last;

  return last;
}

// add node to the front
struct Node* addFront(struct Node* last, int data) {
  // check if the list is empty
  if (last == NULL) return addToEmpty(last, data);

  // allocate memory to the new node
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  // add data to the node
  newNode->data = data;

  // store the address of the current first node in the newNode
  newNode->next = last->next;

  // make newNode as head
  last->next = newNode;

  return last;
}

// add node to the end
struct Node* addEnd(struct Node* last, int data) {
  // check if the node is empty
  if (last == NULL) return addToEmpty(last, data);

  // allocate memory to the new node
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  // add data to the node
  newNode->data = data;

  // store the address of the head node to next of newNode
  newNode->next = last->next;

  // point the current last node to the newNode
  last->next = newNode;

  // make newNode as the last node
  last = newNode;

  return last;
}

// insert node after a specific node
struct Node* addAfter(struct Node* last, int data, int item) {
  // check if the list is empty
  if (last == NULL) return NULL;

  struct Node *newNode, *p;

  p = last->next;
  do {
  // if the item is found, place newNode after it
  if (p->data == item) {
    // allocate memory to the new node
    newNode = (struct Node*)malloc(sizeof(struct Node));

    // add data to the node
    newNode->data = data;

    // make the next of the current node as the next of newNode
    newNode->next = p->next;

    // put newNode to the next of p
    p->next = newNode;

    // if p is the last node, make newNode as the last node
    if (p == last) last = newNode;
    return last;
  }

  p = p->next;
  } while (p != last->next);

  cout << "\nThe given node is not present in the list" << endl;
  return last;
}

// delete a node
void deleteNode(Node** last, int key) {
  // if linked list is empty
  if (*last == NULL) return;

  // if the list contains only a single node
  if ((*last)->data == key && (*last)->next == *last) {
  free(*last);
  *last = NULL;
  return;
  }

  Node *temp = *last, *d;

  // if last is to be deleted
  if ((*last)->data == key) {
  // find the node before the last node
  while (temp->next != *last) temp = temp->next;

  // point temp node to the next of last i.e. first node
  temp->next = (*last)->next;
  free(*last);
  *last = temp->next;
  }

  // travel to the node to be deleted
  while (temp->next != *last && temp->next->data != key) {
  temp = temp->next;
  }

  // if node to be deleted was found
  if (temp->next->data == key) {
  d = temp->next;
  temp->next = d->next;
  free(d);
  }
}

void traverse(struct Node* last) {
  struct Node* p;

  if (last == NULL) {
  cout << "The list is empty" << endl;
  return;
  }

  p = last->next;

  do {
  cout << p->data << " ";
  p = p->next;

  } while (p != last->next);
}

int count(struct Node *last)
{
   int total = 0;
   struct Node *current = last;

    // Iterate till end of list
    do 
    {
        current = current->next;
        total++;
    } while (current != last);

    // Return total nodes in list
    return total;
} 

int search(struct Node *last, int key)
{
	int index = 0;
  struct Node *current = last;

    // Iterate till end of list
    do 
    {
		// Nothing to look into
		if (current == NULL)
			return -1;
		
		if (current->data == key)
			return index;

        current = current->next;
		index++;
    } while (current != last);

    // Element not found in list
    return -1;
}


int main() {
  struct Node* last = NULL;
  int choice,flag=1,item,data,key,n,index;
  while (flag==1)
  {
    cout<<"\n1.CREATE\n2.INSERT\n3.DELETE\n4.SEARCH\n5.DISPLAY\n6.COUNT\n7.EXIT";
    cout<<"\n Enter your choice : ";
    cin>>choice;
    switch (choice)
    {

    case 1:
        cout<<"\n Enter a node to add at end: ";
            cin>>data;
            last=addToEmpty(last, data);
            break;

    case 2:
        int choice;
        cout<<"\n1.Insert at Beginning\n2.Insert in Between\n3.Insert at End";
        cout<<"\n Enter your choice : ";
        cin>>choice;
        switch (choice)
        {
            case 1:
            cout<<"\n Enter a node to insert: ";
            cin>>data;
            last=addFront(last, data);
            break;
        
            case 2:
            cout<<"\n Enter a node to insert & after which node in List: ";
            cin>>data>>item;
            last=addAfter(last, data,item);
            break;

            case 3:
            cout<<"\n Enter a node to insert: ";
            cin>>data;
            last=addEnd(last, data);
            break;
        }
        break;

        case 3:
            cout<<"\n Enter a node to delete: ";
            cin>>key;
            deleteNode(&last, key);
            break;

        case 4:
            cout<<"\n Enter a node to search: ";
            cin>>n;
            index = search(last, n);
            if(index == -1)
             {
                cout << endl << n << " is not found";
            } 
            else 
            {
            cout << endl << n << " is found at "<<index<<" position ";
            }
            break;

        case 5:
            cout<<"\n Linked List is : ";
            traverse(last);
            break;

        case 6:
            cout<<"Total Nodes in the List are :"<<count(last)<<"\n";
            break;

        case 7:
            flag=0;
            break;
  
    default:
      cout<<"\n Enter some choice!";
      break;
    }
  }
  return 0;
}

