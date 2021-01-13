#include<stdio.h>
main()
{ int num,temp,rev,a,b,c;
   printf("Enter 3 digit number");
   scanf("%d",&num);
   temp=num;
   a=num%10;
   num=num/10;
   b=num%10;
   num=num/10;
   c=num%10;
   num=num/10;
   rev=a*100+b*10+c*1;
   (rev==temp)?printf("Palindrome number"):printf("Not Palindrome");
   return 0;
}
