#include <stdio.h>
#include <stdlib.h>

struct poly {
    int coef,exp;
    struct node *link;
};
 struct node *head;
 int main()   {
 int cofficient,exponent,i,no;
printf("enter the no of terms\n");
scanf("%d",&no);
for ( i = 1; i<=no; i++)
{
    struct poly *temp,*ptr;
    temp = (struct poly *)malloc(sizeof(struct poly *));
    printf("enter the %d coefficient value\nenter the %d exponent value\n",i,i);
    scanf("%d",&cofficient);
     scanf("%d",&exponent);
     temp->coef=cofficient;
     temp->exp=exponent;
     temp->link=NULL;
     ptr=temp;
     if (head==NULL)   {
        head=temp;
        ptr=head;        }
    else  {
       ptr->link=NULL;
        ptr=ptr->link; }
   }
        return (head);
    //dispaly
     struct poly *ptr;
    printf("the polynomial is");
    ptr=head;
    while (ptr->link!=NULL)
    {
        printf("%dx^%d+",ptr->coef,ptr->exp);
        ptr=ptr->link;
    }
     printf("%dx^%d",ptr->coef,ptr->exp);
 }
    