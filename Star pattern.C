/*    *
    *   *
      *      */

#include<stdio.h>
#include<conio.h>
void main()
{ int i,j,k=0,m,n,a,b,d,c=9,e;
  clrscr();
  for(i=5;i>=1;i--)
  { for(j=1;j<=i;j++)
    {printf("* ");
    }
   for(n=1;n<=k;n++)
   {printf("  ");
   }
   for(m=1;m<=i;m++)
   {printf("* ");
   }
   k=k+2;
   printf("\n");
  }
  for(a=1;a<=5;a++)
   { for(b=1;b<=a;b++)
     {printf("* ");
     }
      for(d=1;d<=c-1;d++)
       {printf("  ");
       }
       for(e=1;e<=a;e++)
       {printf("* ");
       }
       c=c-2;
       printf("\n");
     }
  getch();
 }
