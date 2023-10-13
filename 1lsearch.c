#include<stdio.h>
void main()
 {
 int n,i,c,count=0,d=0;
 count=count+2;
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
  printf("enter the searching element\n");
  scanf("%d",&c);
  count++;
  for(i=0;i<n;i++)
    {
    count++;
     if (c==a[i])
      {
     count++;
     printf("%d is present\n",c);
     count++;
     d++;
     count++;
    }
    }
    count++;
     if(d==0)
      {
      count++;
      printf("%d is not present\n",c);
      
      }
      count=count+2;
      printf("time complexity =%d \nspace complexity = %d \n",count,5*4+(4*n));
 }
      
      
      
      
      
