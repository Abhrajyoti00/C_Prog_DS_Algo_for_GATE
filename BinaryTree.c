#include<stdio.h>

struct node{
    char data;
    struct node *left, *right;
};

struct node* AddNode(char c){
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = c;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void PreOrder(struct node *t){
    if(t){
        printf("%c, ", t->data);
        PreOrder(t->left);
        PreOrder(t->right);
    }
    else
        return;
}

void InOrder(struct node *t){
    if(t){
        InOrder(t->left);
        printf("%c, ", t->data);
        InOrder(t->right);
    }
    else
        return;
}

void PostOrder(struct node *t){
    if(t){
        PostOrder(t->left);
        PostOrder(t->right);
        printf("%c, ", t->data);
    }
    else
        return;   
}


void main(){
    struct node* root = newNode(1);
    /* following is the tree after above statement
         1
        / \
      NULL NULL
    */
 
    root->left = newNode(2);
    root->right = newNode(3);
    /* 2 and 3 become left and right children of 1
            1
         /    \
        2      3
      /  \    /  \
   NULL NULL NULL NULL
    */
 
    root->left->left = newNode(4);
    /* 4 becomes left child of 2
             1
         /    \
        2      3
      /  \    /  \
     4 NULL NULL NULL
    / \
 NULL NULL
    */
   printf("The PreOrder Traversal of the Binary Tree is : \n");
   PreOrder(root);
   printf("The InOrder Traversal of the Binary Tree is : \n");
   InOrder(root);
   printf("The PostOrder Traversal of the Binary Tree is : \n");
   PostOrder(root);
}