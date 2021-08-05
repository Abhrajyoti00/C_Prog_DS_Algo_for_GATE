#include<stdio.h>
void swap(int *, int *);

void main(){
    int x,y;
    printf("Enter the values of x and y \n");
    scanf("%d%d", &x, &y);
    swap(&x, &y); // Passing addresses as Values. Therefore it is always Call by value in C
    printf("After swapping x = %d, y = %d", x, y);
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}