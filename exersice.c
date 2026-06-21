#include <stdio.h>
int main()
{ 
 int choice, a;

        while(1){

    printf("For trinagular pyramid press 0 \nfor reversed triangular pyramid press 1\n For full pyramid press 2 ");
    scanf("%d",&choice);

    printf("enter the number");
    scanf("%d", &a);


switch(choice){

case 0: 

for(int i=1;i<=a;i++){

    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
    
}
break;
case 1:

for(int i=a;i>=1;i--){
    for(int j=1;j<=i;j++){

        printf("*");
    }
    printf("\n");
   
}break;
case 2:

for(int i=1;i<=a;i++){

    for( int space=1;space<= a-i;space++){

        printf(" ");
        }
        for(int j=1;j<= (2*i-1);j++) // for condition print the odd number of stars
        {


            printf("*");
        }

    
    printf("\n");
}


}
}
return 0;
}