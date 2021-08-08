#include<stdio.h>
#define DEFAULTSIZE 10

char *resize(char *p, int capacity);
void main(){
    int count = 0, capacity = DEFAULTSIZE;
    char *input;
    char ch;
    input = (char *)malloc(DEFAULTSIZE);
    while((ch = getchar())!=EOF){
        if(count == capacity){
            input = resize(input, capacity);
            capacity+=DEFAULTSIZE;
        }
        input[count++] = ch;
    }
    puts(input);
}

char *resize(char *p, int capacity){
    return realloc(p, capacity+DEFAULTSIZE);
}