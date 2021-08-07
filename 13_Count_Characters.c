#include<stdio.h>
#include<string.h>
void main(){
    int nc;
    for(nc = 0; getchar()!=EOF; ++nc);
    printf("%d", nc-1);
}