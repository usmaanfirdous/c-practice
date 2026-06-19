#include <stdio.h>
int main()
{ 
 int choice, a;

    printf("For trinagular pyramid press 0 & for reversed triangular pyramid press 1\n");
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
   
}

}

return 0;
}