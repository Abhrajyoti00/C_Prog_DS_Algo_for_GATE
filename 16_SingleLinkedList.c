#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int i;
    struct Node *link;
};

struct Node *head;

void createList(int n);
void traverseList();



void main(){
    int n;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createList(n);

    printf("\nData in the list \n");
    traverseList();

    return 0;

}

void createList(int n){
    int data, i;
    printf("Enter the data of node 1\n");
    scanf("%d", &data);
    head->i = data;
    head->link = NULL;
    
    for(i = 1; i<=n; i++){
        struct Node *new = (struct Node *) malloc(sizeof(struct Node));
        if(new == NULL)
            printf("Unable to provide Memory\n");
        else{
            scanf("%d", &data);
            new->i = data;
            new->link = 
        }
    }
}