#include <stdio.h>
int main()
{   
    int a,number=1;//this number varaible is for sequential patterns 
 char choice;
 
 printf(" type the number\n");
 scanf("%d",&a );

/// triangular pyramid 

    // for(int i=1;i<=a;i++)
    // {
    //     for(int j=1;j<=i;j++){

    //         printf("1");
    //     }
    //     printf("\n");
    // }

/// inverted triangular pyramid 


// for(int i=a;i >=1;i--){

//     for(int j=1;j<=i;j++){

//         printf("*");
//     }

//     printf("\n");
// }


/// full pyramid 

// for(int i=1;i<=a;i++){

//     for( int space=1;space<= a-i;space++){

//         printf(" ");
//         }
//         for(int j=1;j<= (2*i-1);j++) // for condition print the odd number of stars
//         {


//             printf("*");
//         }

    
//     printf("\n");
// }


/// number patterns 
//1. systematic number  pattern 

// for(int i=1;i<=a;i++){

//     int number=1;
//     for( int j=1;j<=i;j++){

//         printf("%d",number);


//         number++;
//     }
//     printf("\n");
// }

//2. sequnetial number patterns 

// for(int i=1;i<=a;i++){

   
//     for( int j=1;j<=i;j++){

//         printf("%d",number);


//         number++;
//     }
//     printf("\n");
// }


//3. systematic alphabetical pattern 


// for(int i=1;i<=a;i++)
// {

// char ch='A';

// for(int j=1;j<=i;j++)
// {

//     printf("%c",ch);

//     ch++;
// }
//    printf("\n");
// }



// for(int i=1;i<=a;i++)
// {

// char ch='A';
// for(int space=1;space<=a-i;space++){

//     printf("  ");
// }
// for(int j=1;j<=(2*i-1);j++)
// {

//     printf(" %c",ch);

//     ch++;
// }
//    printf("\n");
// }



}
 












              
    