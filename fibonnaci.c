#include<stdio.h>

int fib_recursive(int n) {
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return (fib_recursive(n-1) + fib_recursive(n-2));
    }
}
int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    
    //this is the iterative method to find the fibonnaci series

for(int i = 0; i < n; i++) {
        if(i <= 1) {
            nextTerm = i;
        } else {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("%d ", nextTerm);



//this is the recusive method to find the fibonnaci series


// printf("The Fibonacci series is : ");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", fib_recursive(i));














    }
   













    return 0;

}






