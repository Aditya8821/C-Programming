#include<stdio.h>
#include<math.h>
main()
{ int num,rem,bin=0,i=0;
  printf("Enter a number");
  scanf("%d",&num);
  while(num!=0)
  { rem=num%10;
    bin=bin+rem*pow(2,i);
    num=num/10;
    i++;
  }
  printf("%d",bin);
}
