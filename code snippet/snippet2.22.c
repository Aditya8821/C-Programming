main()
{ int i,j;
  for(i=1;i<3;i++)
  for(j=1;j<4;j++)
  { if(j==2)continue;
    printf("%d%d\n",i,j);
  }
}
