#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void tower(int n, char *from, char *aux, char *to)
{
    if(n==1)
    {
      printf("\n\tMove Disk 1 from Tower %s to %s",from,to);
      return;
    }
    tower(n-1,from,to,aux);
    printf("\n\tMove Disk %d from Tower %s to %s",n,from,to);
    tower(n-1,aux,from,to);
}
int main()
{
    int a;
    char ch;
    do
    {
    printf("\n\n\tEnter Number of Disks: ");
    scanf("%d",&a);
    tower(a,"SOURCE","AUXILIARY","DESTINATION");
    printf("\n");
    printf("\n\tDo You Want to Do Again: Press[Y/N]");
    ch=getch();
    }while (ch=='y'||ch=='Y');
    return 0; 
}
