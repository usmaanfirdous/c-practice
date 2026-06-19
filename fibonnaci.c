#include<stdio.h>

int fib_recursive(int n) {
   if(n==1 || n==2)
   {
    return n-1;
   }

   else {
    return fib_recursive(n-1)+ fib_recursive(n-2);
   }
}


int fib_itrative(int n){

  int  t1 = 0, t2 = 1 ;

for(int i = 0; i < n-1; i++) {
t2=t1+t2;
t1=t2-t1;


return t1;

}

}
int main() {
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    
    


    
 }
   






















