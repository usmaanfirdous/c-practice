#include <stdio.h>

int main(){
int a ;

printf("Enter a number: ");
scanf("%d",&a); 
//we will sotre the address of a in a pointer variable
int *p=&a;

printf("the derefrence value is: %d",*p); //dereferencing the pointer to get the value of a


///we can also print the address of a using the pointer variable
printf("\nThe address of a is: %p",p); //printing the address of a using the pointer variable

//and we can also print the address of pointer variable p
printf("\nThe address of pointer variable p is: %p",&p); //printing the address of pointer variable p   
}