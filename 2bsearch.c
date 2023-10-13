#include<stdio.h>
void main()
 {
 int n,i,j,c,count=0,flag=0,temp,l,r,m;
 count=count+2;
 printf("enter the limit\n");
 scanf("%d",&n);
 count++;
 int a[n];
 printf("enter the elements\n");
 for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   count=count+2;
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
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
     count=count+4;
     }
    }
   count++;
   }
  count++;
  printf("enter the searching element\n");
  scanf("%d",&c);
  count++;
  l=0;
  r=n-1;
  m=(l+r)/2;
  while(l<=r)
   {
   count++;
   if(c==a[m])
    {
    flag++;
    count=count+2;
    break;
    }
   else if(c<a[m])
    {
    r=m-1;
    m=(l+r)/2;
   count=count+3;
    }
   else if(c>a[m])
    {
    l=m+1;
    m=(l+r)/2;
    count=count+3;
    }
   }
  count++;
  if(flag==1)
   {
    count=count+2;
   printf("%d is present\n",c);
   }
  else
   { 
   count=count+2;
    printf("%d is not present\n",c);
   }
  count++;
  printf("\nspace complexity=%d\ntime complexity%d\n",((4*10)+(4*n)),count);
 }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
   
   
   
   
   
   
   
   
   
   
   
