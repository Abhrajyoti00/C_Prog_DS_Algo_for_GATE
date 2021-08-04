#include<stdio.h>
#include <limits.h>
#include <float.h>

void main(void){
    int c;
    printf("Size of char is %d Ranges from %c to %c\n", sizeof(char), CHAR_MIN, CHAR_MAX );
    printf("Size of int is %d Ranges from %d to %d\n", sizeof(int), INT_MIN, INT_MAX );
    printf("Size of float is %d Ranges from %e to %e\n", sizeof(float), FLT_MIN, FLT_MAX );
    printf("Size of double is %d Ranges from %e to %e\n", sizeof(double), DBL_MIN, DBL_MAX );
    printf("%d",60>>3);
}

/* Output 

    Size of char is 1 Ranges from Ç to ⌂
    Size of int is 4 Ranges from -2147483648 to 2147483647
    Size of float is 4 Ranges from 1.175494e-038 to 3.402823e+038
    Size of double is 8 Ranges from 2.225074e-308 to 1.797693e+308

*/