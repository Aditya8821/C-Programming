#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
typedef struct name
{ char fname[20];
  char lname[20];
}nam;
typedef struct conctact
{ char landline[15];
  char mobile[20];
}con;
typedef struct phoneentry
{ nam pname;
  con pcontact;
}kingdom;
void printmenu()//...........................
{ printf("\n\t...........\n\n\t");
  printf("1.Press 1 to add record in phone..\n\t");
  printf("2.Press 2 to delete record from phone..\n\t");
  printf("3.Press 3 to show saved records in phone..\n\t");
  printf("4.Press 4 to search in phone..\n\t");
  printf("5.Press 5 to exit.....\n");
  
  void addrecord(kingdom book[],int *count)
  { char ch;
    printf("\n\t...................................");
    printf("\n\t STORE RECORDS  ");
    printf("\n\t...................................");
    fflush(stdin);
    system("cls");
    printf("\nEnter first name of the person:->");
    gets(book[*count].pname.fname);
    printf("\nEnter last name of the person:->");
    gets(book[*count].pname.lname);
    printf("\nEnter landline number:->");
    gets(book[*count].pcontact.landline);
    printf("\nEnter mobile number:->");
    gets(book[*count].pcontact.mobile);
    (*count)++;
    printf("\n\tContact saved successfully....  :)");
    printf("\n\tDo you want to add more contacts....\n\tPress(y/n)\n");
    ch=getch();
    if(ch=='y'||ch=='Y')
    addrecord(book,count);
    else
    return;
  }
  void listrecords(kingdom book[],int count)
  { int i=0;
    printf("\n\t.................................");
    printf("\n\t.........LIST RECORDS............");
    printf("\n\t.................................");
    
    
  }
}
