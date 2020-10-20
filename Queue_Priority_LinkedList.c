#include<stdio.h>
#include<stdlib.h>
struct node{
	int data,p;
	struct node *next;
}*f=NULL,*r=NULL;
void enqueue(int value,int pr){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->p=pr;
	if(f==NULL||pr>f->p){ //checking that stack is full OR Priority of inserting element is greater than 1st element present in queue
		newnode->next=f;
		f=newnode;
	}
	else{
		struct node *temp=f;
		while((temp->next!=NULL)&&((temp->next->p)>=pr)){ //if Priority of incoming of element has to come in between the queue
			temp=temp->next;
		}
		newnode->next=temp->next;
	}
}
void dequeue(){
	if(f==NULL)
	printf("\nQueue is Empty!!");
	else{
		struct node *temp=f;
		f=f->next;
		free(temp);
	}
}
void display(){
	if(f==NULL)
	printf("\nQueue is Empty!!");
	else{
		struct node *temp=f;
		printf("\n\tQUEUE:    ");
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		temp=f;
		printf("\n\tPRIORITY: ");
		while(temp!=NULL){
			printf("%d ",temp->p);
			temp=temp->next;
		}
	}
}
void main()
{
	int data,p,choice;
	system("cls");
	while(choice!=3)
	{  
        printf("\n1.Enqueue\n2.Dequeue\n3.EXIT");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\nEnter data: ");
			        scanf("%d",&data);
			        printf("\nEnter priority: ");
			        scanf("%d",&p);
			        enqueue(data,p);
			        system("cls");
			        display();
			        break;
			case 2: system("cls");
                    dequeue();
                    display();
                    break;
            case 3: exit(0);
            default: system("cls");
                     printf("\n\t\tAlert! Incorrect Choice");
		}
	}
}
