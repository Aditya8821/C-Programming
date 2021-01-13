#include<stdio.h>
main()
{ char c;
  printf("Enter any character");
  scanf("%c",&c);
  if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
  printf("\nAlphabet");
  else
  if((c>='0'&&c<='9'))
  printf("\nNumber");
  else
  printf("Special character :)");
  return 0;
}
