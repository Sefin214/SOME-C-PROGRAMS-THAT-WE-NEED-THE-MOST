#include<stdio.h>
int main()
{
  int a,i,j;
  printf("Enter The size of pascal triangle \n");
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
    for(j=0;j<=(a-i-2);j++)
    {
      printf(" ");
    }
    for(j=0;j<=i;j++)
    {
    printf(" %d",fact(i)/(fact(j)*fact(i-j)));
    }
   printf("\n");
 }
}
int fact(int x)
{
  int i,f=1;
  for(i=1;i<=x;i++)
  f=f*i;
  return f;
}
