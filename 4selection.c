#include<stdio.h>
void main ()
 {
 int i,j,x,y,lim,min_index,temp,count=0;
 count++;
 printf("enter the limit\n");
 scanf("%d",&lim);
 count++;
 int a[lim];
 printf("enter the elements\n");
 for(i=0;i<lim;i++)
   {
   count++;
   scanf("%d",&a[i]);
   count++;
   }
   count++;
 for(i=0;i<lim;i++)
   {
    count++;
    min_index=i;
    count++;
    for(j=i+1;j<lim;j++)
      {
       count++;
       if(a[j]<a[min_index])
        {
        count++;
        min_index=j;
        count++;
        }
        }
      temp=a[min_index];
      a[min_index]=a[i];
      a[i]=temp;
      count=count+4;
   }
   count++;
  for(i=0;i<lim;i++)
   {
   count++;
   printf("%d\t",a[i]);
   count++;
   }
 printf("\n");       
 count=count+1;
 printf("time complexity =%d \nspace complexity = %d \n",count,8*4+(4*lim));
 }
