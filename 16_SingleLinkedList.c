#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int i;
    struct Node *next;
};

struct Node *head;

void AddNodeatEnd(int data){
    struct Node *new = (struct Node *) malloc(sizeof(struct Node));
    new->i = data;
    new->next = NULL;

    if(head == NULL) // List is empty, so first node
        head = new;
    else{
        struct Node *temp;
        temp = head;
        while(temp->next)
            temp = temp->next;
        temp->next = new;
        new->next = NULL;
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
    new->next = NULL;

    if(head == NULL) // List is empty, so first node
        head = new;
    else{
        new->next = head;
        head = new;
    }
}
void AddNodeafterValue(){
    struct Node *new = (struct Node *) malloc(sizeof(struct Node));
    int data;
    printf("Enter the data \n");
    scanf("%d", &data);
    new->i = data;
    new->next = NULL;
    printf("Enter the value after which you want to insert\n");
    int value;
    scanf("%d", &value);

    struct Node *temp = head;
    while(temp->i != value)
        temp = temp->next;
    new->next = temp->next;
    temp->next = new;
}

void traverseList(){
    printf("\nData in the list \n");
    struct Node *temp;
    temp = head;
    while(temp){
        printf("%d ", temp->i);
        temp = temp->next;
    }
}



void main(){
    

    createList();
    printf("\nLL  Created\n\n");
    traverseList();

    printf("\nAdd Node at front\n");
    AddNodeatBeg();

    traverseList();
    
    printf("\nAdd Node after a certain value, So enter the value\n");

    AddNodeafterValue();

    traverseList();


    return 0;

}

