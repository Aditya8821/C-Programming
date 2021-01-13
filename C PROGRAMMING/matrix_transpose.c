#include<stdio.h>
main()
{  int m,n,i,j,a[50][50],b[50][50];
  printf("Enter order of matrix");
  scanf("%d%d",&m,&n);
  printf("\n Enter The Matrix Of Order %d  X  %d :",m,n);
  for(i=0;i<m;i++)
  { 
  for(j=0;j<n;j++)
  {
  printf("\n Enter Element [%d , %d]",i+1,j+1);
    scanf("%d",&a[i][j]);
  }
}
  for(i=0;i<m;i++)
  { for(j=0;j<n;j++)
    b[j][i]=a[i][j];
  }
  printf("Transpose of matrix is:");
  for(i=0;i<m;i++)
  { for(j=0;j<n;j++)
    printf("%d",b[i][j]);
  }
  printf("\n")
  
}
