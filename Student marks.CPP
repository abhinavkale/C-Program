
#include<stdio.h>
struct student
   { int rno;
     float marks;
   }s[5];
void main()
{
   int i,j,z,n;
   void input();
   void average();
   void high();
   void low();
   void absent();
   void max();

  do
  { printf("1.Input\n2.Average\n3.Highest marks\n4.Lowest marks\n5.Maximum frequency\n6.Absent Student\n");

    printf("Enter choice\n");
    scanf("%d",&z);

   switch(z)
    { case 1: {input();
		break;
	      }
      case 2: {average();
		break;
	      }
      case 3: {high();
		break;
	      }
      case 4: {low();
		break;
	      }
      case 5: {max();
	       break;
	      }
      case 6: {absent();
	       break;
	      }
      default: { printf("Thanks\n");
	       }
   }

 }while(z<7);

}

 void input()
 {  int i;
    printf("Enter any 5 Roll No\n");
    printf("For Absent Student Enter -1 as marks\n");
     for(i=1;i<=5;i++)
       { printf("Roll No = ",s[i].rno);
	 scanf("%d",&s[i].rno);
	 printf("Enter marks= \n",s[i].marks);
	 scanf("%f",&s[i].marks);
       }

    for(i=1;i<=5;i++)
    { printf("%d  %f\n",s[i].rno,s[i].marks);
    }

 }

 void average()
  {  int i;
     float a=0,b=0,avg=0;

    for(i=1;i<=5;i++)
      { if(s[i].marks!=-1)
	{ a=a+s[i].marks;
	  b++;
	}
      }
   avg=a/b;
   printf("Average Marks= %f\n",avg);
  }

 void high()
  {  int i,c=0;
     for(i=1;i<=5;i++)
       { if(s[i].marks>c)
	   { c=s[i].marks;
	   }
	}
    printf("Highest marks=%d\n",c);
  }

 void low()
 { int i,d=0;
   d=s[1].marks;
     for(i=1;i<=5;i++)
     { if(d>=s[i].marks)
	 { d=s[i].marks;
	 }
     }
  printf("Lowest marks=%d\n",d);
 }

 void absent()
 { int i,ab=0;
   for(i=1;i<=5;i++)
    { if(s[i].marks==-1)
	{ ab=s[i].rno;
	  break;
	}
    }
printf("Absent Student Roll No=%d\n",ab);
 }

 void max()
 { int i,j,max,m;
   int k;
   int a[20];
  s[6].marks=0;
  for(i=1;i<=5;i++)
  {
     for(j=i+1;j<=5;j++)
    {
	if(s[j].marks==s[i].marks)
	 { k++;
	 }
     }   a[i]=k;
	 max=a[0];
  }

  for(i=0;i<=5;i++)
  { if(max<=k)
    { max=m;
    }
    printf("Maximum freq n marks ",max,s[i].marks);
  }
 }