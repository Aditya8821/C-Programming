#include<stdio.h>
main()
{ int a,b,c,max;
  printf("Enter 3 numbers");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  { if(a>c)
    max=a;
    else
    max=c;
  }
  else
   { if(b>c)
     max=b;
     else
     max=c;
   }
   printf("largest number=%d",max);
}
