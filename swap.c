#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter two numbers \n");
  scanf("%d",&a);
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("A:%d\n",a);
  printf("B:%d\n",b);
}
  
