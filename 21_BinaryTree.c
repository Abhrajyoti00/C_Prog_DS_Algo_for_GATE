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

int NN(struct node *root){ // No of Nodes
    if(root == NULL)
        return 0;
    else{
        return (1+NN(root->left)+NN(root->right));
    }
}
int NL(struct node *root){   //No of Leaf
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;
    else
        return NL(root->left) + NL(root->right);
}
int NNL(struct node *root){   //No of Non - Leaf
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 0;
    else
        return 1+NNL(root->left) + NNL(root->right);
}
int FN(struct node *root){   //No of Full Nodes
    if(root == NULL) 
        return 0;
    if(root->left == NULL && root->right == NULL)   // Leaf
        return 0;
    return (FN(root->left) + FN(root->right) + ((root->right && root->left) ? 1:0));
}
int H(struct node *root){
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return 0;
    int l = H(root->left);
    int r = H(root->right);
    return 1+ ((l>r)?l:r);
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

    printf("\nThe number of nodes in the tree :- %d\n", NN(root));
    printf("\nThe number of leaf nodes in the tree :- %d\n", NL(root));
    printf("\nThe number of non - leaf nodes in the tree :- %d\n", NNL(root));
    printf("\n The no of full nodes are %d\n", FN(root));
    printf("\n The height of the binary tree is %d\n", H(root));

}