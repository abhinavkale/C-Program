/*Calculation operation*/
#include<stdio.h>
#include<conio.h>
void main()
{ int ch=0,x,y;
  clrscr();
  printf("Enter a two nos:\n");
  scanf("%d %d",&x,&y);
   while(ch!=6)
   { printf("-------------\n");
     printf("     Menu    \n");
     printf("-------------\n");
     printf("1.Addition\n");
     printf("2.Subtraction\n");
     printf("3.Multiplication\n");
     printf("4.Division\n");
     printf("5.Modulus\n");
     printf("6.Exit\n");
      printf("Enter choice\n");
      scanf("%d",&ch);
       if(ch>=1 && ch<=5)
	{ switch(ch)
	  { case 1:printf("Addition=%d\n",x+y);break;
	    case 2:printf("Subtraction=%d\n",x-y);break;
	    case 3:printf("Multiplication=%d\n",x*y);break;
	    case 4:printf("Division=%d\n",x/y);break;
	    case 5:printf("Modulus=%d\n",x%y);
	  }
	  printf("Thanks....!\n");
	  getch();
       }
     }
     printf("Press a key\n");
     getch();
 }











