#include<stdio.h>
void main()
{
int a[20],n,i;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("The first %d natural numbers are:\n",n);
for(i=0;i<n;i++)
{
a[i]=i+1;
printf("a[%d]=%d\n",i,a[i]);
}
}

