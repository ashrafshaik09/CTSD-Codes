#include<stdio.h>
int size=15;
int front=-1;
int rear=-1;
int deque[size];
void insert_front(int x)    
{    
    if((front==0 && rear==size-1) || (front==rear+1))    
    {    
        printf("Overflow");    
    }    
    else if((front==-1) && (rear==-1))    
    {    
        front=rear=0;    
        deque[front]=x;    
    }    
    else if(front==0)    
    {    
        front=size-1;    
        deque[front]=x;    
    }    
    else    
    {    
        front=front-1;    
        deque[front]=x;    
    }    
}
void delete_rear()    
{    
    if((front==-1) && (rear==-1))    
    {    
        printf("Deque is empty");    
    }    
    else if(front==rear)    
    {    
        printf("\nThe deleted element is %d", deque[rear]);    
        front=-1;    
        rear=-1;    
            
    }    
     else if(rear==0)    
     {    
         printf("\nThe deleted element is %d", deque[rear]);    
         rear=-1;
     }    
     else    
     {    
          printf("\nThe deleted element is %d", deque[rear]);    
          rear=rear-1;    
     }    
}
void enque_rear(int x)
{
	if((front==0 && rear==size-1) || (front==rear+1))    
    {    
        printf("Overflow");    
    }    
    else if((front==-1) && (rear==-1))    
    {    
        rear=0;    
        deque[rear]=x;    
    }    
    else if(rear==size-1)    
    {    
        rear=0;    
        deque[rear]=x;    
    }    
    else    
    {    
        rear++;    
        deque[rear]=x;    
    }    
}
void delete_front()    
{    
    if((front==-1) && (rear==-1))    
    {    
        printf("Deque is empty");    
    }    
    else if(front==rear)    
    {    
        printf("\nThe deleted element is %d", deque[front]);    
        front=rear=-1;    
    }    
     else if(front==(size-1))    
     {    
         printf("\nThe deleted element is %d", deque[front]);    
         front=0;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", [front]);    
          front=front+1;    
     }    
}