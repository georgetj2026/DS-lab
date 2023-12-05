#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 5

int h[TABLE_SIZE]={0};

void insert()
{
 int key,index,i,flag=0,hkey;
 printf("Enter  value to be inserted :");
 scanf("%d",&key);
 hkey=key%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE;i++)
    {
     index=(hkey+i)%TABLE_SIZE;
     if(h[index] == 0)
     {
        h[index]=key;
         break;
     }
    }
    if (i==TABLE_SIZE)
     printf("Element cannot be inserted\n");
}
void search()
{
 int key,index,i,flag=0,hkey;
 printf("Enter search element :");
 scanf("%d",&key);
 hkey=key%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE; i++)
 {
    index=(hkey+i)%TABLE_SIZE;
    if(h[index]==key)
    {
      printf("value is found at index %d\n",index);
      break;
    }
  }
  if(i == TABLE_SIZE)
    printf("\n value is not found\n");
}
void display()
{

  int i;
  printf("Elements in the hash table are \n");
  for(i=0;i< TABLE_SIZE; i++)
  printf("\nat index %d \t value =  %d\n",i,h[i]);
}
int main()
{
    int opt,i;
    printf("CHOICES 1. Insert\t 2. Display \t3. Search \t4.Exit \n");
    while(1)
    {
        printf("Enter choice :");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
        }
    }
}

//input :5,28,19,15,20
	

