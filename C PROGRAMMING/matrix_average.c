#include<stdio.h>
main()
{ int i,j,a[3][4],sum=0;
  float avg;
  printf("Enter matrix");
  for(i=0;i<3;i++)
  { for(j=0;j<4;j++)
  {
     printf("\n Enter Element [%d , %d]   ",i+1,j+1);
     scanf("%d",&a[i][j]);
    sum=sum+a[i][j];
  }
  }
  avg=(float)sum/12;
  printf("====================================");
  printf("\nAverage of matrix is %.2f",avg);
}
