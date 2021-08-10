// #include<stdio.h>
// void swap (char **x, char **y)
// {
//  char *t = *x;
//  *x = *y;
//  *y = t;
// //  printf("\n(%s, %s)", x, y);
 
// }
// int main()
// {
//  char *x = "ravindrababu";
//  char *y = "ravula";
//  char *t;
//  swap(&x, &y);
//  printf("(%s, %s)", x, y);
//  t = x;
//  x = y;
//  y = t;
//  printf("\n(%s, %s)", x, y);
//  return 0;
// }


#include <stdio.h>
void f(char**);
int main()
{
 char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
 f(argv);
 return 0;
}
void f(char **p)
{
 char *t;
 t = (p += sizeof(int))[-1];
 printf("%s\n", t);
}