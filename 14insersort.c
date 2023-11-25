#include<stdio.h>
void main()
{
int a[50],i=1,j,t=0,n;
printf("enter the no of terms :");
scanf("%d",&n);
printf("enter the values\n");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 i=1;
 while(i<n)
  {
  j=i;
  while(a[j]<a[j-1])  {
    t=a[j];
    a[j]=a[j-1];
    a[j-1]=t;
    j--;
    }
    i++;
    }
printf("The sorted array\n");
for(i=0;i<n;i++)
  printf("%d\t",a[i]);
    }
   
 

