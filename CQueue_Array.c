#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
int CQ[size],front=-1,rear=-1;
void Enqueue(int value){
	if((rear+1)%size==front)
	printf("\nCQueue is Full!!!!");
	else if(front==-1){
		front=rear=0;
		CQ[rear]=value;
	}
	else{
		rear=(rear+1)%size;
		CQ[rear]=value;
	}

}
void Dequeue(){
	if(front==-1)
	printf("\nCQueue is already Empty!!");
	else if(front==rear)
	front=rear=-1;
	else
	front=(front+1)%size;
}
void Display(){
	if(front==-1)
	printf("\nCQueue is Empty!!!");
	else{
		printf("\nQueue:- ");
		int i=front;
		while(i!=rear){
			printf("%d ",CQ[i]);
			i=(i+1)%size;
		}
		printf("%d",CQ[rear]);
	}
}
void main(){
	int value,choice;
	system("cls");
	while(choice!=4){
		printf("\n****MENU****");
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.EXIT\n");
		printf("\nEnter your choice:- ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("\nEnter Element to be Enqueued:- ");
			        scanf("%d",&value);
			        system("cls");
			        Enqueue(value);
			        Display();
			        break;
			case 2: system("cls");
			        Dequeue();
			        Display();
			        break;
			case 3: system("cls");
			        Display();
			        break;
			case 4: exit(0);
			default: printf("\nINVALID Choice!!Try Again..\n");
		}
	}
}
