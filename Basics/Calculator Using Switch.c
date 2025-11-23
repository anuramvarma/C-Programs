#include<stdio.h>
int main ()
{
 float a,b;
 printf("a=");
   scanf("%f",&a);
printf("b=");
   scanf("%f",&b);
 int choice;
   scanf("%d",&choice);
printf("1 addtion \n");
printf("2 subtraction \n");
printf("3 multiplication \n");
 printf("4 divsion \n");
 printf("choice=");
switch(choice)
{
    case 1:printf("%f\n",a+b);
break;
    case 2:printf("%f\n",a-b);
break;
    case 3:printf("%f\n",a*b);
break;
    case 4:printf("%f\n",a/b);
break;

    default:printf("enter values only from 1-4 only");
}
return 0;
}
