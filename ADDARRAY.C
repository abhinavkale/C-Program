#include<stdio.h>
#include<conio.h>
void main()
{ int i,no1[5],no2[5],add[5];
  clrscr();
  printf("Enter array 1\n");
  for(i=0;i<5;i++)
  { printf("No1[%d]= ",i);
    scanf("%d",&no1[i]);
  }
  printf("Enter Array 2\n");
  for(i=0;i<5;i++)
  { printf("No2[%d]= ",i);
    scanf("%d",&no2[i]);
    add[i]=no1[i]+no2[i];
  }
  printf("Press a key\n");
  getch();
  clrscr();

  printf("Array 1\n");
  for(i=0;i<5;i++)
  { printf("No1[%d]=%d\n",i,no1[i]);
  }

  printf("Array 2\n");
  for(i=0;i<5;i++)
  { printf("No2[%d]=%d\n",i,no2[i]);
  }

  printf("ADD array\n");
  for(i=0;i<5;i++)
  { printf("add[%d]=%d\n",i,add[i]);
  }
  getch();
}







