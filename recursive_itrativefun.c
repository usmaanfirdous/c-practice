



#include <stdio.h>
int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } 
    
    else {
        return (n * factorial(n - 1));
    }
}




int main() {


int num;
///factorial of a number using iterative method
printf("Enter a number: ");
scanf("%d", &num);

for(; ; ) 
{
    printf("%d\n", factorial(num));
   
}

/// factorial of a number using recursive method




// int result = factorial(num);
// printf("Factorial of %d is %d\n", num, result);

}