/*today we will learn about switch case statements*/


#include<stdio.h>

int main()
{
int a;

printf("enter any number between 1and 3\n");
scanf("%d", &a);


switch (a)
{
    case 2:
    printf("value is 2\n"); 
break;
    case 3:
    printf("value is 3\n");


    default:
    printf("nothing matched \n");
}




}