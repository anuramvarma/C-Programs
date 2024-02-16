#include<stdio.h>
int main ()
{
int min,max,a[100],i,n;
printf("Enter array size : ");
scanf("%d",&n);
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=max=a[0];
for (i=1;i<n;i++)
{
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];
}
printf("Maximum is%d",max);
printf("\nMinimum is %d",min);
}
