#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{ void drawline(void);
  void upper(char[]);
  void lower(char[]);
  void toggle(char[]);
  int ch=0;
  char str[20];

  while(ch!=4)
  { clrscr();
    drawline();
    printf("\nMain Menu\n");
    drawline();
    printf("\n1.UPPERCASE\n");
    printf("2.lowercase\n");
    printf("3.ToGgle case\n");
    printf("4.Exit\n");
    printf("Enter choice\n");
    scanf("%d",&ch);
      fflush(stdin);
    if(ch>=1 && ch<=3)
     { printf("Enter a string\n");
       gets(str);
	switch(ch)
	{ case 1:upper(str);break;
	  case 2:lower(str);break;
	  case 3:toggle(str);
	}
	printf("\nPress a key");
	getch();
     }
   }
 }
 void drawline()
 {int i;
  for(i=0;i<=15;i++)
  { printf("-");
  }
 }

 void upper(char s[])
 { int i=0;
   while(s[i]!='\0')
   { if(isupper(s[i]))
      printf("%c",s[i]);
       else
       printf("%c",toupper(s[i]));
      i++;
   }
 }
 void lower(char s[])
 { int i=0;
   while(s[i]!='\0')
   { if(islower(s[i]))
      printf("%c",s[i]);
       else
       printf("%c",tolower(s[i]));
      i++;
   }
 }
 void toggle(char s[])
 { int i=0;
   while(s[i]!='\0')
   { if(isupper(s[i]))
      printf("%c",tolower(s[i]));
       else
       printf("%c",toupper(s[i]));
     i++;
   }
 }





