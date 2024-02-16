#include<stdio.h>
int main ()
{
int a,b,c,d;
printf("Enter a value of a : ");
scanf("%d",&a);
printf("Enter a value of b : ");
scanf("%d",&b);
printf("Enter a value of c : ");
scanf("%d",&c);
printf("Enter a value of d : ");
scanf("%d",&d);
if (a>b&&a>c&&a>d)
printf("a is big ");
else if (b>a&&b>c&&b>d)
printf("b is big ");
else if (c>a&&c>b&&c>d)
printf("c is big ");
else 
printf("d is big ");
return 0;
}