main()
{ int i=1;
  loop:
  printf("%d",i++);
  if(i==5)goto out;
  goto loop;
  out:
  	printf("\Hello");
}
