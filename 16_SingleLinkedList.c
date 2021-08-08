#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int i;
    struct Node *link;
};

struct Node *head;

void AddNode(int data){
    struct Node *new = (struct Node *) malloc(sizeof(struct Node));
    new->i = data;
    new->link = NULL;

    if(head == NULL) // List is empty, so first node
        head = new;
    else{
        struct Node *temp;
        temp = head;
        while(temp->link)
            temp = temp->link;
        temp->link = new;
    }
}
void createList(int n){
    int data, i; 
    printf("Enter the data of nodes \n");
    for(i = 1; i<=n; i++){
        scanf("%d", &data);
        AddNode(data);
    }
}
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

