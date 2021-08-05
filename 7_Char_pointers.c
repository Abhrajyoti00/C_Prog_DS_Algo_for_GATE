#include<stdio.h>
void strcpy(char *s, char *t){
    while(*s++ = *t++);
}
void main(){
    char t[] = "Abhrajyoti", s[] = "";
    strcpy(s,t);
    printf("t = %s\n", t);
    printf("s = %s\n", s);
}