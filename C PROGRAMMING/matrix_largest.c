#include<stdio.h>
main()
{ int a[20][20],i,j,max,m,n;
  printf("Enter order of matrix");
  scanf("%d%d",&m,&n);
  printf("\nEnter matrix of %d * %d",m,n);
  for(i=0;i<m;i++)
  { for(j=0;j<n;j++)
    { scanf("%d",&a[i][j]);
	}
  }
  max=a[0][0];//Largest number.............
  for(i=0;i<m;i++)
  { for(j=0;j<n;j++)
    if(a[i][j]>max)
    max=a[i][j];
  }
  printf("\nLargest number=%d",max);
}
