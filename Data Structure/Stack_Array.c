#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define size 5
int stack[size],top=-1;
void push(int value){
    if(top==size-1)
      {
          printf("INVALID!!Stack is full\n");
      }
    else{
        top=top+1;
        stack[top]=value;
        printf("Insertion Successfull\n");
    }
}
void pop(){
    if(top==-1){
        printf("INVALID!!Stack is already Empty\n");
    }
    else{
        printf("%d Deleted Successfully\n",stack[top]);
        top=top-1;
    }
}
void display(){
    if(top==-1){
        printf("Stack is EMPTY\n");
    }
    else{
        int i;
        printf("Stack is Given Below\n");
        for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    }
}
void main(){
    int value,choice;
    while(1)
	{
    printf("\n-------------------------\n");
    printf("1.PUSH\n2.POP\n3.Display Stack\n4.Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("Enter value for Insertion:- ");
                scanf("%d",&value);
                push(value);
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        case 4: exit(0);
        default: printf("Wrong Choice...Try Again!!\n");
    }
    }
}

