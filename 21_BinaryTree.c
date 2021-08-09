#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left, *right;
};

struct node* AddNode(int c){
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = c;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void PreOrder(struct node *t){
    if(t){
        printf("%d, ", t->data);
        PreOrder(t->left);
        PreOrder(t->right);
    }
    else
        return;
}

void InOrder(struct node *t){
    if(t){
        InOrder(t->left);
        printf("%d, ", t->data);
        InOrder(t->right);
    }
    else
        return;
}

void PostOrder(struct node *t){
    if(t){
        PostOrder(t->left);
        PostOrder(t->right);
        printf("%d, ", t->data);
    }
    else
        return;   
}


void main(){
    struct node* root = AddNode(1);
    /* following is the tree after above statement
         1
        / \
      NULL NULL
    */
 
    root->left = AddNode(2);
    root->right = AddNode(3);
    /* 2 and 3 become left and right children of 1
            1
         /    \
        2      3
      /  \    /  \
   NULL NULL NULL NULL
    */
 
    root->left->left = AddNode(4);
    /* 4 becomes left child of 2
             1
         /    \
        2      3
      /  \    /  \
     4 NULL NULL NULL
    / \
 NULL NULL
    */
   printf("\nThe PreOrder Traversal of the Binary Tree is : \n");
   PreOrder(root);
   printf("\nThe InOrder Traversal of the Binary Tree is : \n");
   InOrder(root);
   printf("\nThe PostOrder Traversal of the Binary Tree is : \n");
   PostOrder(root);
}