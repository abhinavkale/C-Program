#include<stdio.h>
#include<conio.h>
void main()
{ int i,f,no;
  clrscr();
  printf("Enter a no:\n");
  scanf("%d",&no);
  f=0;
  i=2;
  while(i<=no/2)
   { if(no%i==0)
      { f=1;
	break;
      }
      i++;
   }
   if(f==0)
   { printf("No is a prime no\n");
   }
   else
   { printf("No is not a prime no");
   }
   getch();
 }