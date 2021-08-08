#include<stdio.h>
void main(){
    FILE *fp;
    char ch;
    fp = fopen("test.txt", "w");
    printf("Enter data\n");
    while((ch=getchar())!=EOF)
        putc(ch, fp);
    fclose(fp);
    fp = fopen("test.txt", "r");
    while((ch = getc(fp))!=EOF)
        printf("%c", ch); 
}
