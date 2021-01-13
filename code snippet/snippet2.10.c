main()
{ int expr=2;
  switch(expr)
  { case 1:
  	printf("This is case 1");
  	case 2-1://2-1=1 which is already used in above case
    printf("This is case 2");
  }
}
