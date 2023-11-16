#include<stdio.h>

int main()
{
  int a,f1;
  printf("Enter The number \n");
  scanf("%d",&a);
  f1=factorial(a);
  printf("Factorial is  %d",f1);
}

int factorial(int b)
  {
    if(b==1)
        return 1;
    else
    {
      int f=b*factorial(b-1);
      return f;
    }
  }
