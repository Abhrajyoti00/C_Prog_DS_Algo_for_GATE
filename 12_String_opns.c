#include<stdio.h>
#include<string.h>
void main(){
    char s[256], t[256], orgs[256], orgt[256];
    gets(s);
    gets(t);
    strcpy(orgs,s);    
    strcpy(orgt,t);    

    printf("%s\n", strcat(s,t));
    // printf("%s\n", strcat(s,t));
    strcpy(s,orgs);    
    strcpy(t,orgt);
    printf("%d\n", strcmp(s,t));
    strcpy(s,orgs);    
    strcpy(t,orgt);
    printf("%s\n", strncat(s,t,3));
    printf("%d\n", strchr(s,'a'));
    printf("%d\n", strrchr(s,'a'));

}
/*Output
abhra
ravi
abhraravi
-1
abhrarav
6421792
6421798*/
