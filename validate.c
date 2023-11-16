#include<stdio.h>
int main()
{
  int n,b,i,s1,s2,s3;
  int f=0;
  i=1;
  while(f==0)
  {
    printf("Enter mark 1\n");
    scanf("%d",&s1);
    b=validateMarks(s1);
    if (b==1)
    {
       printf("True\n");
       f=1;
       break;
    }
    else
    printf("False\n");
    printf("Enter a valid input\n");
  }
  f=0;
  while(f==0)
  {
    printf("Enter mark 2\n");
    scanf("%d",&s2);
    b=validateMarks(s2);
    if (b==1)
    {
       printf("True\n");
       f=1;
       break;
    }
    else
    printf("False\n");
    printf("Enter a valid input\n");
  }
  f=0;
  while(f==0)
  {
    printf("Enter mark 3\n");
    scanf("%d",&s3);
    b=validateMarks(s3);
    if (b==1)
    {
       printf("True\n");
       f=1;
       break;
    }
    else
    printf("False\n");
    printf("Enter a valid input\n");
  }
 }
int validateMarks(int a)
{
   if(a<=50)
   return 1;
   else
   return 0;
}
