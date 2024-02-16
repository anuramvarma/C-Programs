#include<stdio.h>
int main()
{
    int i,n,key,pos=-1;
    int a[100];
    printf("THE NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    printf("enter the element to search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    if(key==a[i])
    {
    pos=i;
    break;
    }
    {
    if(pos>=0)
    printf("key is found=%d",pos);
    else
    printf("key is not found");
    }
}