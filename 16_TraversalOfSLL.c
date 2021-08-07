#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int i;
    struct Node *link;
};

// struct Node *t;


void main(){
    int i;
    printf("Enter no of elements \n");
    int n;
    scanf("%d", &n);
    printf("Enter the elements\n");
    struct Node ll = (struct node *) malloc(n*sizeof(struct Node));

    for(i=0; i<n; i++){
        int ele;
        scanf("%d", &ele);
        ll.i = ele;
        ll.link = 
    }
}