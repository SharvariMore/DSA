//Tree traversal for inorder, preorder & postorder

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
    Node(int data){
        this->data = data;
        left=right=NULL;
    }
};

void preorderTraverse(struct Node* node)
{
    if(node==NULL)
    return;

    cout<<node->data<<"->";
    preorderTraverse(node->left);
    preorderTraverse(node->right);
}

void inorderTraverse(struct Node* node)
{
    if(node==NULL)
    return;

    inorderTraverse(node->left);
    cout<<node->data<<"->";
    inorderTraverse(node->right);
}

void postorderTraverse(struct Node* node)
{
    if(node==NULL)
    return;

    postorderTraverse(node->left);
    postorderTraverse(node->right);
    cout<<node->data<<"->";
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(10);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(2);
    root->right->right = new Node(4);

    cout<<"\n\n Preorder Traversal : ";
    preorderTraverse(root);

    cout<<"\n\n Inorder Traversal : ";
    inorderTraverse(root);

    cout<<"\n\n Postorder Traversal : ";
    postorderTraverse(root);
}
