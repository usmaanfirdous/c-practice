#include <stdio.h>

void swap(int*x, int*y)
{
   int temp;
    temp=*x; // put the value of a in temp
    *x=*y; // make the values same here 54 = *y/b
    *y=temp; // changing the value of a to b stored in temp
}


/// FROM THIS WE CAN SWAP SOME VALUES OF A AND B HERE 




int main()
{ 
   int a=34,b=54;
   
   

    printf("the value of a is %d & the vaue of b is %d\n",a, b);

    swap(&a, &b);
 
   printf("the value of a is %d & the value of b is%d\n",a,b);


   return 0;
}

