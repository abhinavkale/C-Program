#include<stdio.h>
#include<conio.h>
void main()
{ int i,no[5];
  clrscr();
  printf("Enter a 5 nos\n");
  for(i=0;i<5;i++)
  { printf("No[%d]= ",i);
    scanf("%d",&no[i]);
  }
  printf("Reverse array...\n");
  for(i=4;i>=0;i--)
  { printf("No[%d]=%d\n",i,no[i]);
  }
 getch();
}