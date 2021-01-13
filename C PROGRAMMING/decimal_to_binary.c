#include<stdio.h>
#include<math.h>
main()
{ int num,rem,bin=0,i=0;
  printf("Enter a number");
  scanf("%d",&num);
  while(num!=0)
  { rem=num%2;
    bin=bin+rem*pow(10,i);
    num=num/2;
    i++;
  }
  printf("%d",bin);
}
