#include<stdio.h>
main()
{ int A,B,n,i,count;
  printf("Enter value of A and B");
  scanf("%d%d",&A,&B);
  printf("Prime number between %d and %d are:",A,B);
  for(n=A;n<=B;n++)
  {
  	count=0;
  for(i=2;i<=n/2;i++)
  { 
  if(n%i==0)
    { 
	count++;
	}
  }
    if(count==0&&n!=1)
    printf("%d ",n);
  }
}
