#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node*next;
}*top=NULL;
void push(int value){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	if(top==NULL) #checking that stack is empty
	newnode->next=NULL;
	else
	newnode->next=top; # assigning previous element adderess in newnode next
	top=newnode;
	printf("Value Inserted successfully\n");
}
void pop(){
	if(top==NULL)
	printf("Stack is already Empty\n");
	else{
	struct node* temp=top;
	printf("Deleted value: %d\n",top->data);
	top=top->next; 
	free(temp);
   }	
}
void display(){
	if(top==NULL)
	printf("!!!!EMPTY!!!!");
	else{
		struct node* temp=top;
		while(temp->next!=NULL){
			printf("%d--->",temp->data);
			temp=temp->next;
		}
		printf("%d--->",temp->data);
	}
}
void main(){
	int value,choice;
	while(1){
		printf("\n-------------\n");
		printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		printf("Enter your Choice:- ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter Value:- ");
			        scanf("%d",&value);
			        push(value);
			        break;
			case 2: pop();
			        break;
			case 3: display();
			        break;
			case 4: exit(0);
			default: printf("Invalid Choice!!TRY AGAIN");
		}
	}
} 
