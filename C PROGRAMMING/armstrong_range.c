#include<stdio.h>
#include<math.h>
main()
{ 
  int a,b,d,n,copy,sum,count;
  printf("Enter value of a and b");
  scanf("%d%d",&a,&b);
  printf("Armstrong number between %d and %d are:",a,b);
  if(a>b)
  {
  printf("\n Invalid");

} 
 else
 for(n=a;n<=b;n++)

{
  sum=0;
  count=0;
  copy=n;
  while(copy!=0)
  { 
    copy=copy/10;
    count++;
  }
  copy=n;
  while(copy!=0)
  {
     d=copy%10;
    sum=sum+pow(d,count);
    copy=copy/10;
  }
  if(sum==n)
  printf("%d ",sum);
}
}

