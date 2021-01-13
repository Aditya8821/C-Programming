#include<stdio.h>
main()
{ int m,n,i,j,a[50][50],b[50][50],c[50][50];
  printf("Enter order of matrix");
  scanf("%d%d",&m,&n);
  printf("\n Enter First Matrix Of Order %d X %d :",m,n);
  for(i=0;i<m;i++)
  { 
  for(j=0;j<n;j++)
  {
    printf("Enter element [%d , %d]",i+1,j+1);
    scanf("%d",&a[i][j]);
}
  }
  printf("\n Enter Second Matrix Of Order %d X %d :",m,n);
  for(i=0;i<m;i++)
  { for(j=0;j<n;j++)
  {
    printf("Enter element [%d , %d]",i+1,j+1);
    scanf("%d",&b[i][j]);
  }
}
  for(i=0;i<m;i++)
  { 
  for(j=0;j<n;j++)
  {
  	c[i][j]=a[i][j]+b[i][j];
  }
}
printf("\n Resultant Matrix After Addition is:\n\n");
  for(i=0;i<m;i++)
  { 
  for(j=0;j<n;j++)
  {
  	printf("%d ",c[i][j]);
  }
  printf("\n");
}
}
