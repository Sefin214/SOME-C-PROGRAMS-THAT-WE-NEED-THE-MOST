#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter Two Numbers \n");
  scanf("%d%d",&a,&b);
  if((a^b)==0)
  printf("Equal\n");
  else
  printf("Unequal\n");
  return 0;
}
