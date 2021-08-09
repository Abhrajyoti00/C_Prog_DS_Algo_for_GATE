#include<stdio.h>

struct node{
    char data;
    struct node *left, *right;
};

void AddNode(char c){
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = c;
    newNode->left = NULL;
    newNode->right = NULL;
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
    printf("Enter the no of nodes");
    int n;
    scanf("%d", &n);
    printf("")
    for(int i = 0; i<n; i++){
        char data;
    
    }
}