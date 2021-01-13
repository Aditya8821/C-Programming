#include<stdio.h>
main()
{ int a[50],b[50],c[100],i,j,k,n1,n2;
  printf("Enter number of elements in array 1: ");
  scanf("%d",&n1);
  printf("\nEnter sorted elements of array 1:\n");
  for(i=0;i<n1;i++)
  {
  scanf(" %d",&a[i]);
  }
  printf("Enter number of elements in array 2: ");
  scanf(" %d",&n2);
  printf("\nEnter sorted elements of array 2:\n");
  for(j=0;j<n2;j++)
  {
  scanf(" %d",&b[j]);
  }
  i=0;
  j=0;
  k=0;
  while(i<n1&&j<n2)
  { if(a[i]<b[j])
    {c[k]=a[i];
    i++;
    k++;
    }
    else
    {
    c[k]=b[j];
    j++;
    k++;
    }
  }
  while(i<n1)
  { c[k]=a[i];
    i++;
    k++;
  }
  while(j<n2)
  { c[k]=b[j];
    j++;
    k++; 
  }
  printf("\nAfter merging sorted array:\n");
  for(i=0;i<(n1+n2);i++)
  {
   printf(" %d ",c[i]);
  }
}
