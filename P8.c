#include<stdio.h>
void main()
{
int a[20],n,i;
printf("Enter the array size");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("The elements entered in the array are\n");
}
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("The elements of the array in reverse order are \n");
for(i=n-1;i>=0;i--)
{
printf("%d\t",a[i]);
}
}
