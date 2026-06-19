#include<stdio.h>

int main(){

char choice;

printf("this is a unit conversion program. q to quit \n");
while(1) {
printf("press 1 for km to m\n");
printf("press 2 for kg to gm\n");
printf("press 3 for inches to foot\n");

scanf(" %c", &choice);

switch (choice)
{   

    case 'q':
    {
        printf("quiting the program......\n");
        goto end;      
        break;
    }
    case '1':
    {
        float km;
        printf("enter the value in km\n");
        scanf("%f", &km);
        printf("the value in m is %f\n", km*1000);
    }
    break;

    case '2':
    {
        float kg;
        printf("enter the value in kg\n");
        scanf("%f", &kg);
        printf("the value in gm is %f\n", kg*1000);
    }
    break;

    case '3':
    {
        float inches;
        printf("enter the value in inches\n");
        scanf("%f", &inches);
        printf("the value in foot is %f\n", inches/12);
    }
    break;

    default:
    
break;
}



}end:

}

