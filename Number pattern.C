#include<stdio.h>
#include<conio.h>
void main()
{ int i,j;
  clrscr();
  for(i=1;i<=5;i++)
  { for(j=1;j<=5;j++)
    { if(i==5 || i==1 || j==1 || j==5)
	printf("1 ");
	else if(i==3&&j==3)
	 printf("3 ");
	  else if(i==2&&1<j<5 || i==4&&1<j<5 || 2<=i<=4&&j==2 || 2<=i<=4&&j==4)
	    printf("2 ");
	    else
	    printf("  ");
      }
      printf("\n");
   }
   getch();
}