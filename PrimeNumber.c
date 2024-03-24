#include<stdio.h>
 int main ()
 {
int i,n,f;
printf("Enter a value=");
  scanf("%d",&n);
 i=1;
 f=0;
 while(i<=n)
  {
    if(n%i==0)
      f++;
      i++;
  }
 if(f==2)
   {
    printf("It is a Prime number");
   }
 else
  {
    printf("It is not a prime number");
  }
 return 0;
 }
