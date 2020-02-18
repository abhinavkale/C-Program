#include<stdio.h>
#include<conio.h>
void main()
{ int i=0,count=0,b=0,g;
  char str[20],sr,j,a[20];
  clrscr();
  printf("Enetr string\n");
  gets(str);
  printf("Word\n");
  scanf("%s",&sr);
  while(str[i]!='\0')
  { if(str[i]==sr)
     { printf("%d\n",i);
       break;
     }
	 i++;
  }
  printf("Enter a word to count\n");
  scanf("%s",&j);
  for(i=0;str[i]!='\0';i++)
  { if(str[i]==j)
     count++;
  }
  printf("%d\n",count);
   fflush(stdin);

 printf("Another word\n");
 gets(a);
  for(i=0;str[i]!='\0';i++)
   { fflush(stdin);
     if(str[i]==a[b])
      {
       if(str[i+1]==a[b+1])
	{ g++;

	}break;
      }

    }
    printf("%d\n",g);
  getch();
}






