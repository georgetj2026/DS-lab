#include<stdio.h>
void main() {
int i,pos,n;
char CH='y';
printf("enter the no of nodes\n");
scanf("%d",&n);
int a[n];
printf("enter the numbers of tree elements\n");
for(i=1;i<=n;i++) 
{
  printf("enter the %d element :\t",i);
    scanf("%d",&a[i]);
    }
  while(CH=='y') {
  printf("enter the node to search\n");   
  scanf("%d",&pos);
  if(pos<2) 
   printf("%d has no parent\n",a[pos]);
  else
  printf("parent of %d = %d\n",a[pos],a[pos/2]);
  if(pos*2>n)
       printf("%d has no leftchild\n",a[pos]);
  else
  printf("left child of %d =%d\n",a[pos],a[pos*2]);
  if((pos*2)+1>n)
   printf("%d has no rightchild\n",a[pos]);
   else
  printf("right child of %d =%d\n",a[pos],a[(pos*2)+1]);
printf("do you want to continue y/n:\t");
scanf("%s",&CH);
}}
