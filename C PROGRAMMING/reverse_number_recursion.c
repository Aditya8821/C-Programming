#include<stdio.h>
#include<math.h>
main()
{ int num,len,r,temp;
printf("\nEnter number ");
scanf("%d",&num);
temp=num;
while(temp!=0)
{ temp=temp/10;
len++;
}
r=reverse(num,len);
printf("\nReverse of number:%d",r);
return 0;
}
int reverse(int num,int len)
{ if(len==1)
  return num;
  else
  return (num%10)*pow(10,len-1)+reverse(num/10,len-1);
}
