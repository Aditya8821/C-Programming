#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define n 10
int Q[n],Pr[n],f=-1,r=-1;
void enqueue(int data, int p)
{
    int i;
	if((f==0)&&(r==n-1))
	printf("\nQueue is Full!!");
	else
	{
		if(f==-1)  //checking if queue is empty then inserting 1st value
		{
			f=r=0;
			Q[r]=data;
			Pr[r]=p;
		}
		else if(r==n-1) //if there are some elements in Q but some empty spaces before front bcoz of deleting elements
		{
			for(i=f;i<=r;i++)
			{
				Q[i-f]=Q[i];
				Pr[i-f]=Pr[i];
			}
			f=0;
			r=r-f;
			for(i=r;i>=f;i--)
			{
				if(p>Pr[i])
				{
					Q[i+1]=Q[i];
					Pr[i+1]=Pr[i];
				}
			}
			Q[i+1]=data; //because i value will come outside loop at value -1
			Pr[i+1]=p;
			r++;
		}
		else //if there are some elements in Q and no empty space was there before front
		{
		for(i=r;i>=f;i--){
				if(p>Pr[i]){
					Q[i+1]=Q[i];
					Pr[i+1]=Pr[i];
				}
			}
			Q[i+1]=data;
			Pr[i+1]=p;
			r++;
		}
			
	}
}
void dequeue()
{
	if(f==-1)
	printf("\nQueue is Already Empty!!");
	else
	{
		if(f==r)
		f=r=-1;
		else
		f++;
	}
}
void display()
{   
    int i;
	if(f==-1)
	printf("\nQueue is EMPTY");
	else
	{ 
	  printf("\n\tQueue     : ");
	  for(i=f;i<=r;i++)
	  {
	     printf("%d ",Q[i]);
	  }
	  printf("\n\tPRIORIRITY: ");
	  for(i=f;i<=r;i++)
	  {
	     printf("%d ",Pr[i]);
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
