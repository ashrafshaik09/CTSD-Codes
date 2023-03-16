#include<stdio.h>
#include<stdlib.h>
void insertion_beginning(int);
void insertion_last(int);
void insertion_specified(int,int);
void deletion_beginning(void);
void deletion_last(void);
void deletion_specified(int);
void display(void);
void search(void);
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*head=NULL;
int main()
{
	int option,val,pos;
	while(1)
	{
		printf("1.display\t2.Insert last\t3.insertfirst\t4.insertmiddle\t5.delete first\t6.delete last\t7.delete middle\t8.Search\tothers exit\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				display();
				break;
			case 2:
			    scanf("%d",&val);
			    insertion_last(val);
				break;
			case 3:
				scanf("%d",&val);
				insertion_beginning(val);
				break;
			case 4:
			    scanf("%d",&val);
				scanf("%d",&pos);
				insertion_specified(val,pos);
				break;
			case 5: deletion_beginning();
			        break;
			case 6: deletion_last();
			        break;
			case 7: scanf("%d",&pos);
			        deletion_specified(pos);
			        break;						
			default :
			        exit(0);		
			   		
		}
	}
	return 0;
}
void display()
{
	struct node *ptr;
	printf("Printing values...");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
void insertion_last()
{
	struct node *newnode,*temp;
	int item;
	newnode*=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
		printf("Overflown\n");
	else
	{
		printf("Enter value\n");
		scanf("%d",&item);
		newnode->data=item;
		if(head==NULL)
		{
			newnode->next=NULL;
			newnode->prev=NULL;
			head=newnode;
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=newnode;
			newnode->prev=temp;
			newnode->next=NULL;	
		}
	}
	printf("Node inserted\n");	
}
void insertion_beginning()
{
	struct node *newnode;
	int x;
	newnode=(struct node*)malloc(sizeof(atruct node));
	printf("Enter value\n");
	scanf("%d",&x);
	if(head==NULL)
	{
		newnode->next=NULL;
		newnode->prev=NULL;
		newnode->data=x;
		head=newnode;
	}
	else
	{
		newnode->data=x;
		newnode->prev=NULL;
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
	printf("Node inserted");
}
void insertion_specified()
{
	struct node *newnode,*temp;
	int item,i,loc;
	newnode=(struct node*)malloc(sizeof(atruct node));
	if(newnode==NULL)
		printf("Overflown");
	else
	{
		temp=head;
		printf("Enter location\n");
		scanf("%d",&loc);
		for(i=1;i<loc-1;i++)
		{
			temp=temp->next;
			if(temp==NULL)
			{
				printf("There are less than %d elements",loc);
				return;
			}
		}
		printf("Enter value");
		scanf("%d",&item);
		
		}	
}