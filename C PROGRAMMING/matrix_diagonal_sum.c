#include<stdio.h>
main()
{ int m,n,sum=0,i,j,a[50][50];
  printf("Enter order of square matrix");
  scanf("%d%d",&m,&n);
  printf("\nEnter matrix");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
    {
	scanf("%d",&a[i][j]);
    }
    printf("\n");
  }
  printf("\n Diagonal element are:\n");
  for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
    if(i==j)
    {
    	printf("%d ",a[i][j]);
    sum=sum+a[i][j];
	}
   }
  
}
printf("\nSum of diagonal elements=%d",sum);
sum=0;
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
    if(i<j)
    {
	printf("\nupper element %d  ",a[i][j]);
    sum=sum+a[i][j];
	}
   }
}
 printf("\n sum upper elements=%d",sum);
sum=0;
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
    if(i>j)
    {
	printf("\nLower element %d  ",a[i][j]);
    sum=sum+a[i][j];
	}
   }
 
}
 printf("\n sum lower elements=%d",sum);
}
