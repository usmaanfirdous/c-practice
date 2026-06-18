#include <stdio.h>
int main()
{ 

    int arr[] ={1,2,3,4,5};



    printf("%d\n", arr); // this will print the address of the first element of the array
    printf("%d\n", &arr[0]); // this will also print the address of the first element of the array
    printf("%d\n", arr+1); // this will print the address of the second element of the array because the data type of arr is int and int takes 4 bytes in memory in my architecture 
    printf("%d\n", &arr[1]); // this will also print the address of the second element of the array 

// the above exaples gives us the array address either by generic method of calling an array or by using the pointer arthematics operator  




/// so whats happening here is that when we add 1 to the array name, it is actually adding the size of the data type of the array to the address of the first element of the array. so in this case, it is adding 4 bytes to the address of the first element of the array to get the address of the second element of the array.  

/// similarly we can call any element of the array using the pointer arithmetic. for example, if we want to call the third element of the array, we can do it like this:
    printf("%d\n", *(arr+2)); // this will print the value of the third element of the array 

/// we can call differrent elements the same way as above or we can use array indexing method 

    printf("%d\n", arr[2]); // this will also print the value of the third element of the array




    // int a=4;
    // int *ptra = &a; //pointer variable p is storing the address of a

    // printf("%d\n", ptra);
    // printf("%d", ptra+1); // this will take a space of 4 bytes because the data type of pointer variable p is int and int takes 4 bytes in memory in my architecture 

    
    
    return 0;
}
    