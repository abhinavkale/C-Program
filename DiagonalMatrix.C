#include<stdio.h>
#include<conio.h>
void main()
{ int i,j,mul[3][3];
  clrscr();
  printf("Enter Matrix\n");
  for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
    { printf("No[%d][%d]= ",i,j);
      scanf("%d",&mul[i][j]);
    }
    printf("\n");
  }

  for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
    { if(i==j)
      { printf("%d\t",mul[i][j]);
      }
      else
      { mul[i][j]=0;
	printf("%d\t",mul[i][j]);
      }
    }
    printf("\n");
  }
 getch();
  }





