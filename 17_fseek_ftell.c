#include<stdio.h>
void main(){
    FILE *fp;
    int len;
    fp = fopen("TestIp.txt", "r");
    if(fp == NULL)
        printf("Error opening file\n");
    else{
        fseek(fp, 0, SEEK_END);
        len = ftell(fp);
    }
    fclose(fp);
    printf("Total size of TestIp.txt = %d bytes \n", len);
}