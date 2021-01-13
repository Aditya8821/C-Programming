main()
{ int add(int,int),a,b,c;
  a=10,b=20;
  c=add(a,b);
  printf("The result of addition is %d",add(a,b));
}
int add(int a,b)//COMPILATION TIME ERROR BECAUSE SHORT PARAMETER ARE NOT ALLOWED(int a,int b)
{ return a+b;
}
