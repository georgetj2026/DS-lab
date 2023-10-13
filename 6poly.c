#include<stdio.h>
void main()
 {
 int l,i;
 printf("enter the no of terms in polynmial");
 scanf("%d",&l);
  struct poly
  {
  int coeff,exp;
  }     
  s[l];
  for(i=0;i<l;i++)
    {
    printf("enter the coefficient value of %dth term\n",i+1);
    scanf("%d",&s[i].coeff);
    printf("enter the exp value of %dth term\n",i+1);
    scanf("%d",&s[i].exp);
    }
   printf("The polynomial is\n");
   for(i=0;i<l;i++)
    {
    if(i<l-1)
    printf("%dx^%d+",s[i].coeff,s[i].exp);
    else
    printf("%dx^%d",s[i].coeff,s[i].exp);
    }
    }
    
    
    
    
