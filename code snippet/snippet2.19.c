main()
{ int i=1;
  loop:
  printf("%d",i++);
  if(i==5)break;//it can be used only in loop...........
  goto loop;
}
