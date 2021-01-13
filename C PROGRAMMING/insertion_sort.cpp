#include<stdio.h>
int main()
{ int a[100],i,n;
  printf("Enter number of elements");
  scanf("%d",&n);
  printf("\nEnter %d elements",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  insersionsort(a,n);
  printf("\nElements after sorting are:\n");
  for(i=0;i<n;i++)
  printf(" %d",a[i]);
}
void insersionsort(int a[], int n)
{ int key,i,j;
  for(i=1;i<n;i++)
  { 
  key=a[i];
    j=i-1;
    while(j>=0&&key<a[j])
    { a[j+1]=a[j];
      j--;
	}
	a[j+1]=key;
  }
}

