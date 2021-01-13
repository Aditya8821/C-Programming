#include<stdio.h>
main()
{ int n,i,j,a[100],temp;
  printf("Enter number of elements:");
  scanf("%d",&n);
  printf("\nEnter %d elements:",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=1;i<=n-1;i++)
  { for(j=0;j<=n-i-1;j++)
    {if(a[j+1]<a[j])
     {
	 temp=a[j+1];
     a[j+1]=a[j];
     a[j]=temp;
     }
	}
  }
  printf("\nAfter sorting");
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
}
