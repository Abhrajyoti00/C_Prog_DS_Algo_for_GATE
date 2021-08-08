#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int i;
    struct Node *link;
};

struct Node *head;

void AddNodeatEnd(int data){
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
        new->link = NULL;
    }
}
void createList(){
    int data, i; 
    int n;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    printf("Enter the data of nodes \n");
    for(i = 1; i<=n; i++){
        scanf("%d", &data);
        AddNodeatEnd(data);
    }
}
void AddNodeatBeg(){
    struct Node *new = (struct Node *) malloc(sizeof(struct Node));
    int data;
    printf("Enter the data \n");
    scanf("%d", &data);
    new->i = data;
    new->link = NULL;

    if(head == NULL) // List is empty, so first node
        head = new;
    else{
        new->link = head;
        head = new;
    }
}

void traverseList(){
    struct Node *temp;
    temp = head;
    while(temp){
        printf("%d ", temp->i);
        temp = temp->link;
    }
}



void main(){
    

    createList();

    printf("\nData in the list \n");
    traverseList();

    printf("Add Nodes at front\n");
    AddNodeatBeg();

    return 0;

}

