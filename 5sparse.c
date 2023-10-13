#include<stdio.h>
void main()
 {
 int r,c,i,j,k=1,l,count=0;
 printf("enter the order of matrix\n");
 scanf("%d%d",&r,&c);
 int a[r][c];
  printf("enter the matrix\n");
  for(i=0;i<r;i++) 
  {
    for(j=0;j<c;j++)
    {
     scanf("%d",&a[i][j]);
     }
     }
  struct sparse
  {
  int row,col,val;
  }
  s[30];
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
    if(a[i][j]!=0)
     {
     s[k].row=i;
     s[k].col=j;
     s[k].val=a[i][j];
     count++;
     k++;
     }
    }
    }
  s[0].row=r;
  s[0].col=c;
  s[0].val=count;
  printf("The matrixin sparse form\n");
  printf("row\tcolumn\tvalue\n");
   for(i=0;i<k;i++)
      printf("%d\t%d\t%d\n",s[i].row,s[i].col,s[i].val);
      }
      
