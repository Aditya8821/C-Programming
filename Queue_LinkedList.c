#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;

void Enqueue(int value)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(front==NULL)
	{
		front=rear=newnode;
	}
	else
	{
	    rear->next=newnode;
	    rear=newnode;
    }
}

void Dequeue()
{
	if(front==NULL)
	{
		printf("\nQueue is already Empty\n");
	}
	struct node *temp=front;
	front=front->next;
	free(temp);
}

void Display()
{
	if(front==NULL)
	{
		printf("\nQueue is EMPTY!!");
	}
	else
	{
		printf("\n\tQueue:-> ");
		struct node *temp=front;
		while(temp->next!=NULL)
		{
			printf("%d--->",temp->data);
			temp=temp->next;
		}
		printf("%d--->NULL\n",temp->data);
	}
}

void main()
{
	int value,choice;
	system("cls");
	while(choice!=4)
	{   printf("\n****MENU****");
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.EXIT\n");
		printf("\nEnter your choice:- ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\nEnter element to be enqueued:- ");
		            scanf("%d",&value);
		            system("cls");
					Enqueue(value);
					Display();
					break;
			case 2: system("cls");
			        Dequeue();
			        Display();
			        break;
			case 3: Display();
			        break;
			case 4: exit(0);
			default: printf("\nINVALID Choice!!Try Again..\n");	
		}
	}
}
