#include<stdio.h>
int main()
{ int a,b,op;
  printf("Enter 2 numbers");
  scanf("%d%d",&a,&b);
  printf("Choose operator:\n1.To add\n2.To substract\n3.To multiply\n4.To divide");
   scanf("%d",op);
   fflash(stdin);
  switch(op)
  { 
    case'1':
  printf("Addition is=%d\n",(a+b));
   break;
    case'2':
   printf("Substraction=%d\n",(a-b));
   break;
    case'3':
	printf("Multiplication=%d\n",(a*b));
	break;
	case'4':
	printf("Divide=%d\n",(a/b));
	break;
	default:
	printf("Wrong operation"); 	
  }
}
