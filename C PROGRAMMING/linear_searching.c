#include<stdio.h>
main()
{ int n,i,a[100],num,found=0; 
  printf("Enter number of elements");
  scanf("%d",&n);
  printf("\nEnter %d elements",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("\nEnter number for search");
  scanf("%d",&num);
  for(i=0;i<n;i++)
  {if(a[i]==num)
    { printf("%d exists in %d index",num,i+1);
      found++;
	} 
  }
  if(found==0)
  printf("%d does not exist in this array",num);
}
