#include<stdio.h>
void main()
 {
 int n,i,j,temp,count=0;
 count++;
 printf("enter the limit\n");
 scanf("%d",&n);
 count++;
 int a[n];
 printf("enter the elements\n");
 for(i=0;i<n;i++)
  {
  count++;
  scanf("%d",&a[i]);
  count++;
  }
  count++;
 for(i=0;i<n;i++)
   {
    count++;
    for(j=i+1;j<n;j++)
     {
      count++;
      if(a[i]>a[j])
       {
        count++;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        count=count+3;
       }
     }
    count++;
   }
 count++;
 printf("the sorted array\n");
  for(i=0;i<n;i++)
   {
    count++;
    printf("%d\t",a[i]);
    count++;
   }
  printf("\n");       
  count=count+2;
  printf("space complexity=%d\ntime complexity%d\n",(4*5)+(4*n),count);
 }
 
 
 
 
 
 
 
 
 
 
 
 
