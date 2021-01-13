#include<stdio.h>
#include<conio.h>
#define size 10
int Queue[size],front=-1,rear=-1;
void EnQueue(int value){
	if(rear==size-1)
	{
	    printf("\nQueue is Full!!");
    }
	else{
		if(front==-1)
		{
		   front=0;
	    }
		rear++;
		Queue[rear]=value;
	}
}
void DeQueue(){
	if(front==-1)
	{
	    printf("\nQueue is already Empty!!");
	}
	else{
		if(front==rear)
		front=rear=-1;
		front++;
	}
}
void Display(){
	if(rear==-1)
	{
	    printf("\n!!!!!Queue is Empty!!!!!");
	}
	else{
		int i;
		printf("\n\tQueue:-> ");
		for(i=front;i<=rear;i++)
		printf("%d ",Queue[i]);
	}
}
void main(){
	int value,choice;
	system("cls");
	while(choice!=4){
		printf("\n****MENU****");
		printf("\n1.EnQueue\n2.DeQueue\n3.Display\n4.EXIT\n");
		printf("\nEnter your Choice:- ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("\nEnter Value to be EnQueued:- ");
			        scanf("%d",&value);
			        system("cls");
			        EnQueue(value);
			        Display();
			        break;
			case 2: system("cls");
			        DeQueue();
			        Display();
			        break;
			case 3: Display();
			        break;
			case 4: exit(0);
			default: printf("\nINVALID Choice!!Please try again!!!");
		}
    }
}
