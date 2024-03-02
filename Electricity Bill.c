#include<stdio.h>
int main ()
{
float n;
printf("Enter the units=");
scanf("%f",&n);
 if(n<=50)
printf("Bill=%f",n*0.5);
 else if (n<=100)
printf("Bill=%f",25+(n-50)*0.75);
 else if (n<=200)
printf("Bill=%f",25+37.5+(n-100)*1.2);
 else
printf("Bill=%f",25+37.5+120+(n-200)*1.50);
 return 0;
}
