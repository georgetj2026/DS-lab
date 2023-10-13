#include<stdio.h>
int stack[30],top,n,ch;
void push();
void pop();
void peek();
void display();
int main()
  {
   top=-1;
   printf("Enter the number of terms:\n");
   scanf("%d",&n);
   printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
  do
   {
    printf("Enter the choice:\t");
    scanf("%d",&ch);
    switch(ch)
     {
     case 1:
     push();
     break; 
     case 2:
     pop();
     break;
     case 3:
     peek();
     break;
     case 4:
     display();
     break;
     case 5:
     break;
     default:
     break;
    }
   } while(ch!=5);
 }
void push()  {
  if(top<n) {
  top=top+1;
  printf("Enter element to be pushed:\n");
  scanf("%d",&stack[top]); }
  else
  printf("OVERFLOW\n");  }
void pop()  {
  if(top>=0)  {
  printf("popped element is %d\n",stack[top]);
  top=top-1; }
  else
  printf("UNDERFLOW\n");  }
void peek()  {
  if(top==-1){
  printf("Stack is empty\n"); }
  else
  printf("Top element is %d\n",stack[top]);  }
void display()  {
  int i;
  if(top==-1)
  printf("Stack is empty\n");
  else {
   printf("The elements in stack are\n");
   for(i=top;i>=0;i--) 
    printf("%d\n",stack[i]);  } 
}















