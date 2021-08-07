#include<stdio.h>
#include<string.h>
void reverse(char s[]);
void main(){
    char s[256];
    // while((s = getchar())!='\0');
    gets(s);
    reverse(s);
    printf("%s", s);
}
void reverse(char s[]){
    int c,i,j;
    for(i = 0, j = strlen(s)-1; i<j; i++,j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    // printf("%s", s);
    
}