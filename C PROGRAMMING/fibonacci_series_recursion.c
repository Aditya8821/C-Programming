#include<stdio.h>
int f(i);
main()
{ int terms,i;
  printf("Enter number of terms");
  scanf("%d",&terms);
  for(i=1;i<=terms;i++)
  { printf("%d",f(i));
  }
}
int f(int n)
{if(n==1)
return 0;
else
if(n==2)
return 1;
else
return f(n-1)+f(n-2);
}
