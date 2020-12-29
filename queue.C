#include<stdio.h>
#include<conio.h>
#define max 10
int queue[max];
int front=-1,rear=-1;
void insert(void);
int delete(void);
int peek(void);
void display(void);
int main()
{int option,val;
clrscr();
do
{printf("\t***MENU***");
printf("\n 1.insert\t2.delete\t3.peek\t4.Display\t5.Exit");
printf("\n Enter your choice");
scanf("%d",&option);
switch(option)
{case 1:insert();
	break;
 case 2:val=delete();
	if(val!=-1)
	{printf("\n the deleted element is %d",val);}
	break;
 case 3:val=peek();
       if(val!=-1)
       {printf(" \n first element is %d",val);}
       break;
 case 4:display();
	break;
 }
 }while(option!=5);
 getch();
 return 0;
 }
 void insert()
 {int n;
 printf("\n Enter the value to be inserted");
 scanf("%d",&n);
 if(rear==max-1)
 printf("\n Overflow");
 else if(front==-1&&rear==-1)
 front=rear=0;
 else
 rear++;
 queue[rear]=n;
 }
 int delete()
 {int val;
 if(front==-1||front>rear)
 printf("\n Underflow");
 else
 val=queue[front];
 front++;
 if(front>rear)
 front=rear=-1;
 return val;
 }
 int peek()
 {if(front==-1||front>rear)
{ printf("\n Queue is empty");
 return -1;
 }
 else
 {return queue[front];}
 }
 void display()
 {int i;
 printf("\n");
 if(front==-1||front>rear)
 printf(" Queue is empty");
 else
 for(i=front;i<=rear;i++)
 {printf("\t %d",queue[i]);
 }
 }
