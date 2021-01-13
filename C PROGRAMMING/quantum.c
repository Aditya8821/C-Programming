#include<stdio.h>
#include<string.h>
int main()
{
	char ptr[10];
	int i,n,l;
	printf("\n Enter the no. of students you want to put...");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the name of %d student :",i+1);
		gets(ptr);
	}
	for(i=0;i<n;i++)
	{
	l=strlen(ptr[i]);
	if(l<6)
    puts(ptr[i]);
}
}
