#include<stdio.h>
int main()
{
	int a[10],b[10];
	int n1,n2,i,j;
	printf("\nHow many elements do you want to input in 1st SET:- ");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("\nEnter element: ");
		scanf("%d",&a[i]);
	}
	i=0;
	printf("\nHow many elements do you want to input in 2nd SET:- ");
	scanf("%d",&n2);
	for(j=0;j<n1;j++)
	{
		printf("\nEnter element: ");
		scanf("%d",&b[j]);
	}
	j=0;
	int c[n1+n2];
	int k,flag;
	for(k=0;k<n1;k++)
	{
		c[k]=a[i];
		i++;
	}
	for(k=n1;k<n1+n2;k++)
	{
		c[k]=b[j];
		j++;
	}
	printf("\nSet1 UNION Set2: ");
	for(k=0;k<n1+n2;k++)
	{ flag=0;
		for(i=0;i<k;i++)
		{
			if(a[i]==c[k])
			{   
			    flag=1;
		    }
		}
		if(flag==0)
		printf("%d ",c[k]);
	}
	
}
