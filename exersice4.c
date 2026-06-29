#include <stdio.h>

void add_sub(int *x, int *y, int *add, int *sub){

    
*add= *x + *y;

*sub= *x - *y;
}

int main()
{ 
    int a=3, b=4;

    int add, sub;

    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b );

    add_sub ( &a, &b, &add, &sub);

    printf("now the value of addition is %d\n", add);
    printf("And the value of subtraction is %d\n", sub);

    return 0;
}