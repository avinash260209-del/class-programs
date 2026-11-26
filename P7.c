#include<stdio.h>
void main()
{
int a[10],n,i,sum=0;
printf("Enter the number of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=sum+i;
}
printf("sum=%d",sum);
}

