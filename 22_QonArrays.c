#include<stdio.h>
// void fun(int arr[])  // Here pointer is passed
// {
// int i;
// int arr_size = sizeof(arr)/sizeof(arr[0]);

// printf("Size of int = %d\n", sizeof(int));
// printf("Size of arr = %d\n", sizeof(arr)); // It actually gives pointer size, not array size 
// printf("Size of arr[0] = %d\n", sizeof(arr[0]));
// for (i = 0; i < arr_size; i++)
//  printf("%d ", arr[i]);
// }
// int main()
// {
//  int i,*p;
//  int arr[4] = {10, 20 ,30, 40};
//  printf("size of pointer = %d", sizeof(p));

//  printf("intitally :- \n");
//  printf("Size of arr = %d\n", sizeof(arr));
//  printf("Size of arr[0] = %d\n", sizeof(arr[0]));
//  printf("After Passing to fun :- \n");

//  fun(arr);
//  fun(arr);}

// int main()
// {
//  char *str; 
//  str = "GfG";     /* Stored in read only part of data segment */
//  *(str+1) = 'n'; /* Problem:  trying to modify read only memory */
//  printf("%s", str);
//  getchar();
//  return 0;
// }   /// ERROR

int main()
{
 char str[] = "GfG";  /* Stored in stack segment like other auto variables */
 *(str+1) = 'n';   /* No problem: String is now GnG */
 printf("%s", str);

 getchar();
 return 0;
}