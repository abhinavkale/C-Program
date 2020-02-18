#include<stdio.h>
#include<conio.h>
void main()
{ int i,j;
  clrscr();
  for(i=0;i<=5;i++)
  { for(j=0;j<=i;j++)
    { printf("%c%c ",j+65,j+97);
    }
   printf("\n");
  }
  getch();
}
