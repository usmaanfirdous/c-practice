#include <stdio.h>

int main(){

int a;
printf ("have you passed maths,science or both\n press 1 for maths\n press 2 for science\n press 3 for both\n press 0 for none\n");
scanf("%d", &a);


if (a==1)
{

printf ("you get 15 rupee for passing maths\n");
}

else if (a==2)
{
printf ("you get 15 rupee for passing science\n");
}
else if (a==3)
{
printf ("you get 45 rupee for passing both\n");
}
else if (a==0)
{
printf ("you get 0 rupee\n");
}







    return 0;
}