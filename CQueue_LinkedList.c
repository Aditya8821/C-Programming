#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;
void Enqueue(int value){
	    struct node* newnode=(struct node*)malloc(sizeof(struct node));
	    newnode->data=value;
	    newnode->next=NULL;
	    if(front==NULL){
	    	front=rear=newnode;
	    	rear->next=NULL;
		}
		else{
			rear->next=newnode;
			rear=newnode;
			rear->next=front;
		}
}
void Dequeue(){
	struct node *temp=front;
	if(front==NULL && rear==NULL)
	   printf("\nCQueue is Empty!!!");
	else if(front==rear){
		front=rear=NULL;
		free(temp);
	}
	else{
		front=front->next;
		rear->next=front;
		free(temp);
	}
}
void Display(){
	struct node *temp=front;
	if(front==NULL && rear==NULL)
	   printf("\nCQueue is Empty!!!");
	else{
		printf("\nCQueue: ");
		while(temp->next!=front){
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("%d-->NULL",temp->data);
	}
}
void main(){
	int value,choice;
	system("cls");
	while(choice!=4){
		printf("****MENU****");
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.EXIT");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("\nEnter element to be enqueued: ");
			        scanf("%d",&value);
			        system("cls");
			        Enqueue(value);
			        Display();
			        break;
			case 2: system("cls");
			        Dequeue();
			        break;
			case 3: system("cls");
			        Display();
			        break;
			case 4: exit(0);
			default: printf("\nINVALID choice!!Try again..");
		}
	}
}
