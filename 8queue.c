#include<stdio.h>
int stack[30],front=0,item,rear=-1,n,ch;
void enqueue();
void dequeue();
void peak();
void display();
int main()
  {
   printf("Enter the number of terms in queue:\n");
   scanf("%d",&n);
  do
   {
    printf("Enter the choice:\n");
    printf("1.enqueue\n2.dequeue\n3.peak\n4.display\n5.exit\n");
    scanf("%d",&ch);
    switch(ch)
     {
     case 1:
     enqueue();
     break; 
     case 2:
     dequeue();
     break;
     case 3:
     peak();
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
  void enqueue()  {
     if(rear<n-1 )  {
        rear=rear+1;
        printf("Enter the element to enqueue:\n");
        scanf("%d",&stack[rear]);  }
     else  {
        printf("The stack is in OVERFLOW condition\n"); }
   } 
   void dequeue()   {  
    if(front==rear){
       printf("The dequeued element is %d\n",stack[front]);
       front=0;
       rear=-1;  }
    else if(rear<front) {
          printf("The stack is in UNDERFLOW condition\n");    }
    else  {
         printf("The dequeued element is %d\n",stack[front]);
         front=front+1;;  }
            }
   void peak()   {
   if(rear<front){
      printf("The stack is empty\n");   }
   else   {
     printf("The frontmost element is %d\n",stack[front]);   }
   }   
   void display()   {
     int i;
     if(rear<front){
      printf("The stack is empty\n");   }
    else  {
     printf("The elements in the queue are:\n");
     for(i=rear;i>=front;i--)     
        printf("%d\n",stack[i]);     
     }
   }
   
   
   
   
   
   
   
   
   
   
   
