main()
{ int add(int,int),a,b,c;
  a=10,b=20;
  c=add(a,b);
  printf("The result of addition id %d",c);
  int add(int a,int b)//function cannot be defined within the body of same function..
  { return a+b;
  }
}
