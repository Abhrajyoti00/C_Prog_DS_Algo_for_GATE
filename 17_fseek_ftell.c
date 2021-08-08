#include<stdio.h>
void main(){
    FILE *fp;
    int len, success;
    fp = fopen("TestIp.txt", "r");
    if(fp == NULL)
        printf("Error opening file\n");
    else{
        success = fseek(fp, 0, SEEK_END);
        len = ftell(fp);
    }
    fclose(fp);
    printf("Success status %d\n", success);
    printf("Total size of TestIp.txt = %d bytes \n", len);
}