#include<stdio.h>
#include<math.h>
int main ()
{
int a,b,c;
float alpha,beta;
printf("Enter a value of a : ");
  scanf("%d",&a);
printf("Enter a value of b : ");
 scanf("%d",&b);
printf("Enter a value of c :");
scanf("%d",&c);
alpha=(-b+sqrt(b*b-4*a*c))/2*a;
beta=(-b-sqrt(b*b-4*a*c))/2*a;
printf("Roots of a quadratic Equation are : ");
printf("%f%f",alpha,beta);
return 0;
}
