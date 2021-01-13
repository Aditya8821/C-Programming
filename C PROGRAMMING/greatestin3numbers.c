#include<stdio.h>
main()
{ int a,b,c,large;
printf("Enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
large=(a>b)?(a>c?a:c):(b>c?b:c);
printf("largest number::%d",large);
}
