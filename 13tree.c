#include<stdio.h>
void main() {
int i,ch,n;
printf("enter the no of nodes\n");
scanf("%d",&n);
int a[n];
printf("enter the numbers of tree elements\n");
for(i=1;i<=n;i++) 
{
  printf("enter the %d element\n",i);
    scanf("%d",&a[i]);
    }
  printf("enter the node to search\n");
  scanf("%d",&ch);
  if(ch<2) 
   printf("%d has no parent\n",a[ch]);
  else
  printf("parent of %d = %d\n",a[ch],a[ch/2]);
  if(ch*2>n)
       printf("%d has no leftchild\n",a[ch]);
  else
  printf("left child of %d =%d\n",a[ch],a[ch*2]);
  if((ch*2)+1>n)
   printf("%d has no rightchild\n",a[ch]);
   else
  printf("right child of %d =%d\n",a[ch],a[(ch*2)+1]);
}
