#include<stdio.h>
main()
{ int a,b,hcf;
printf("Enter 2  numbers");
scanf("\n%d%d",&a,&b);
hcf=gcd(a,b);
printf("\nGCD of %d and %d = %d",a,b,hcf);
}
int gcd(int a,int b)
{ if(b==0)
  return a;
  else
  return gcd(b,a%b);
}
