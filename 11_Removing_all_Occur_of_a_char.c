#include<stdio.h>
void squeeze(char s[], int c){
    int i = 0,j = 0;
    for(; s[i]!='\0';i++){
        if(s[i]!=c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}
void main(){
    // char c[] = {"abhra"}, to_remove = 'a';
    char c[101], to_remove;

    // scanf("%c", &c);
    gets(c);
    scanf("%c", &to_remove);
    squeeze(c,(int)(to_remove));
    printf("%s", c);
}